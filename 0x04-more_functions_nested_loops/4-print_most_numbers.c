#include "main.h"

/**
*print_most_numbers - Print 0 - 9 except 2, 4
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar('\n');
}
