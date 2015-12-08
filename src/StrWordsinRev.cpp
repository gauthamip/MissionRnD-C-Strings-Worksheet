/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i = len - 1;
	int k = len - 1;
	int p = 0;
	char ip[40];
	while (input[i] > 0)
	{
		if (input[i] == ' ')
		{
			for (int j = i + 1; j <= k; j++)
			{
				ip[p] = input[j];
				p++;
			}
			ip[p] = ' ';
			p++;
			k = i - 1;
		}
		if (i == 0)
		{
			for (int j = i; j <= k; j++)
			{
				ip[p] = input[j];
				p++;
			}
		}
		i--;
	}
	ip[p] = '\0';
	for (i = 0; i < len; i++)
	{
		input[i] = ip[i];
	}
}
