/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<math.h>

int power(int b, int p)
{
	int pow = 1;
	for (int i = 1; i <= p; i++)
	{
		pow = pow*b;
	}
	return pow;
}

void number_to_str(float number, char *str,int afterdecimal){
	int n, i = 0, j, temp, no = 0;
	char rev[10];
	if (number < 0)
	{
		str[0] = '-';
		no = 1;
	}
	int num = (int)number;
	n = abs((int)number);
	float flt;
	flt = number - (float)num;
	while (n > 0)
	{
		temp = n % 10;
		rev[i] = temp + '0';
		n = n / 10;
		i++;
	}
	int k = i - 1;
	for (j = no; j < i + no; j++)
	{
		str[j] = rev[k];
		k--;
	}
	str[j] = '.';

	int count = 1;
	while (afterdecimal > 0)
	{
		int t = (abs((int)(flt * power(10, count)))) % 10;
		str[++j] = t + '0';
		afterdecimal--;
		count++;
	}
	if (afterdecimal == 0)
	{
		str[++j] = '\0';
	}
}
