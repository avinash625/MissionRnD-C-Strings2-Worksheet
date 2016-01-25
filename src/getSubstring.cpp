/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){

	char *sub_string = NULL;
	int index = 0, start;
	if (str == NULL || i<0 || j<= 0 || i> j)
		return NULL;
	else
	{
		sub_string = (char *)malloc(sizeof(char)*(j - i+1));
		for (index = 0; str[index]; index++)
			if (index == i)
				break;
			for (start = 0; start<=j-i; index++, start++)
				sub_string[start] = str[index];
			sub_string[start] = '\0';
	}
	return sub_string;
}
