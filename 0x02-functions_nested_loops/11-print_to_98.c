#include "main.h"

void print_to_98(int n)
{
	int a;
	int b;

	if (n > 98)
	{
		for (b = n; b >= 98; b++)
		{
			_putchar(b);
			if (a != 98)
			{
				_putchat(',');
				_putchart(' ');
			}

		}
	}

	for (a = n; a < 99; a++)
	{
		_putchar(a);
		if (a != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
