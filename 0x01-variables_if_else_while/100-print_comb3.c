#include <stdio.h>

/**
*main - Starting point
*
*Return: 0 as default value
*/

int main(void)
{

	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a == 9 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
