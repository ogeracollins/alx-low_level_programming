#include "main.h"

/**
*puts2 - Print characters of a string
*@str: String to print
*/

void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char i*y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (z = 0; z <= l; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
