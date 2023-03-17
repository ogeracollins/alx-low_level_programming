#include <stdio.h>

/**
*main - Starting point of program
*
*Return: 0 as default value
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
