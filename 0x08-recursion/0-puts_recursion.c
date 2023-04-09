/*
*Author: Collins Ogera
*Date: 4/9/2023
*/
#include "main.h"

/**
*_puts_recursion - Print string to stdout
*@s: Pointer to string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
