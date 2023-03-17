#include <stdio.h>

/**
*main - Starting point of program
*
*Return: 0 as default value
*/

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
