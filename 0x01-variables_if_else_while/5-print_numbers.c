#include <stdio.h>

/**
*main - Starting point of program
*
*Return: 0 as default value
*/


int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');

	return (0);
}
