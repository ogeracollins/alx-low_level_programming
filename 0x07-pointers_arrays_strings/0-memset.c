#include "main.h"

/**
*_memset - Set first n bytes to memory area pointed
*@s: Pointer to memory
*@b: Character to set
*@n: Number of bytes to fill
*
*Return: Pointer to *s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
