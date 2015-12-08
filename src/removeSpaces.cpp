/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

#include<stdio.h>
char removeSpaces(char *str) {
	int i = 0, k = 0, flag, j = 0;
	if (str == NULL || str[0] == '\0')
		return '\0';
	while (str[i] != '\0')
	{
		flag = 0;
		if (str[i + k] == ' ')
		{
			j = i;
			while (str[i + k] == ' ')
			{
				k++;
			}
			do
			{
				str[j] = str[j + k];
				j++;
				flag++;
			} while (str[j + k] != ' ' && str[j + k] != '\0');
		}
		if (str[j + k] == '\0')
		{
			str[j] = '\0';
			break;
		}
		if (flag > 0)
			i = j;
		else
			i++;
	}
	return '\0';
}