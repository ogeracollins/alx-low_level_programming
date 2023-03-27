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
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
