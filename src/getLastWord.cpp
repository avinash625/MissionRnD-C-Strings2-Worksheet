/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	char *last_word = NULL, ch;
	int index, start = 0, end = 0, i = 0;
	if (str == NULL)
		return NULL;
	else
	{
		for (index = 0; str[index]; index++)
		{
			ch = str[index];
			if (ch == ' ' && str[index + 1] != ' ' && str[index + 1] != '\0')
				start = index + 1;
			if (ch != ' ' && (str[index + 1] == ' ' || str[index + 1] == '\0'))
				end = index;
		}
		last_word = (char *)malloc(sizeof(char)*(end - start + 1));
		for (i = 0; str[start] != ' ' && str[start]; i++, start++)
			last_word[i] = str[start];
		last_word[i] = '\0';
	}
	return last_word;
}