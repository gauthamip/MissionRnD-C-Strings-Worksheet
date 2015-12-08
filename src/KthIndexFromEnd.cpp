/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
char KthIndexFromEnd(char *str, int K) {
	int i = 0, count = 0;
	char ch = ' ';
	if (str == NULL || str[0] == '\0')
		return '\0';
	while (str[i] != 0)
	{
		i++;
	}
	if (K < 0 || K>i)
		return '\0';

	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i + K + 1] == '\0')
			{
				ch = str[i];
				count = 1;
			}

			if (count == 1)
				break;
			i++;
		}
		return ch;
	}
}