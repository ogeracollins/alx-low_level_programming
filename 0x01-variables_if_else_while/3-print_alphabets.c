#include <stdio.h>

/**
*main - Starting point of program
*
*Return: 0 as default value
*/

int main(void)
{
	char ch = 'a';
	char DF = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (DF <= 'Z')
	{
		putchar(DF);
		DF++;
	}
	putchar('\n');

	return (0);
}
