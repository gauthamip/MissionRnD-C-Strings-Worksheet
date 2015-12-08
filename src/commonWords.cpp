/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>
#include<string.h>

#define SIZE 31
int str_cmp(char *str1, char *str2) {
	while (*str1 && *str2) {
		if (*str1 != *str2) {
			return false;
		}
		str1++;
		str2++;
	}
	if ((!*str1 && !*str2) == 1)
		return 1;
	else
		return 0;
}

char ** commonWords(char *str1, char *str2) {
	if (str1 == NULL || str2 == NULL)
		return NULL;
	else
	{
		char **str = (char**)malloc(35 * sizeof(char*));
		char string1[30][30], string2[30][30];
		char *string = (char*)malloc(sizeof(char*));
		int i = 0, j = 0, k = 0, p = 0, len1, len2;
		for (i = 0; i < 10; i++)
		{
			str[i] = (char *)malloc(35 * sizeof(char));
		}
		str[0][0] = '\0';
		i = 0;
		while (str1[i] != '\0')
		{
			p = 0;
			while (str1[i] != ' ')
			{
				if (str1[i] == '\0')
					break;
				string1[k][p] = str1[i];
				p++;
				i++;
			}
			string1[k][p] = '\0';
			p++;
			k++;
			i++;
		}
		len1 = k;
		i = 0, j = 0, k = 0, p = 0;
		while (str2[i] != '\0')
		{
			p = 0;
			while (str2[i] != ' ')
			{
				if (str2[i] == '\0')
					break;
				string2[k][p] = str2[i];
				p++;
				i++;
			}
			string2[k][p] = '\0';
			p++;
			k++;
			i++;
		}
		len2 = k;
		k = 0;
		j = 0;
		for (k = 0; k < len1; k++)
		{
			strcpy(string, string1[k]);
			for (i = 0; i < len2; i++)
			{
				if (str_cmp(string, string2[i]) == 1)
				{
					int c = 0;
					while (string[c] != '\0')
					{
						str[j][c] = string[c];
						c++;
					}
					str[j][c] = '\0';
					j++;
				}
			}
		}
		if (str[0][0] == '\0')
			return NULL;
		else
			return str;
	}
}