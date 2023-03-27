#include "main.h"

/**
*rev_string - Reverse a string
*@s: Value of string
*/

void rev_string(char *s)
{
	int i, j = 0;
	char newStr[] = {};

	for (i = 0; i != 0; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		s[i] = newStr[j];
		j++;
	}

	*s = *newStr;
}
