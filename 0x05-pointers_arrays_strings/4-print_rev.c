/*
*Author: Collins Ogera
*Date: 3/27/2023
*/
#include "main.h"

/**
*print_rev - Print string in reverse
*@s: Pointer to string
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
