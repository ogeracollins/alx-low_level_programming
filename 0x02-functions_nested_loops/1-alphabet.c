#include "main.h"

/**
*print_alphabet - Function to print alphabet
*
*Return: No return
*/

void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
