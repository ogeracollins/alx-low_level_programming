/*
*Author: Collins Ogera
*Dare: 2/4/2023
*/

#include "main.h"
#include <string.h>

/**
*_strcmp - Compare to strings
*@s1: First stirng
*@s2: Second string
*
*Return: 0 if equal, 1 if greater, -1 if less
*/

int _strcmp(char *s1, char *s2)
{
	int i, fir_len, sec_len;

	fir_len = strlen(s1);
	sec_len = strlen(s2);

	if (fir_len != sec_len)
	{
		if (fir_len > sec_len)
			return (1);
		else
			return (-1);
	}
	else
	{
		for (i = 0; i < fir_len; i++)
		{
			if (*(s1) > *(s2))
				return (1);
			else if (*(s1) < *(s2))
				return (-1);
		}
		return (0);
	}
}
