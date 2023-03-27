#include "main.h"

/**
*puts2 - Print characters of a string
*@str: String to print
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '/0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
