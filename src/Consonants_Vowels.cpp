/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	int Alpha[26] = { 0 }, index;
	char ch;
	*consonants = 0;
	*vowels = 0;
	if (str == NULL)
	{
		return;
	}
	else
	{
		for (index = 0; str[index]; index++)
		{
			ch = str[index];
			if (ch >= 'A' && ch <= 'Z')
				Alpha[ch - 'A']++;
			else if (ch >= 'a' && ch <= 'z')
				Alpha[ch - 'a']++;
		}
		for (index = 0; index < 26; index++)
		{
			if (Alpha[index] != 0 && (index == 0 || index == 4 || index == 8 || index == 14 || index == 20))
				(*vowels)++;

			else if (Alpha[index])
				(*consonants)++;
		}

	}
}
