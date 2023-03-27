/*
*Author: Collins Ogera
*Date: 3/27/2023
*/

/**
*print_rev - Print string in reverse
*@s: Pointer to string
*/
void print_rev(char *s)
{
	int last, i, first;

	first = s;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	last = s;

	for (last; last >= first; last--)
	{
		_putchar(*last);
	}
	_putchar('\n');
}
