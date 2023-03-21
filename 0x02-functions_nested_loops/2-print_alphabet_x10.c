#include "main.h"

/**
*print_alphabet_x10 - Program to print alphabet 10 times
*
*Return: null
*/
void print_alphabet_x10(void)
{
	int a;
	char start;

	for (a = 0; a < 10; a++)
	{
		for (start = 'a'; start <= 'z'; start++)
			_putchar(start);
	}
	_putchar('\n');

	return;
}
