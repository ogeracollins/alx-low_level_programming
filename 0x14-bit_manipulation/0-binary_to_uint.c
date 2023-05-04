#include "main.h"
#include <math.h>

/**
*binary_to_uint - Convert bin to int
*@b: Binary number
*
*Return: Integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len, c;

	len = strlen(b) - 1;

	if (b == NULL)
		return (0);

	for (c = 0; len >= 0; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
			res += pow(2, len);
		len--;
	}
	return (res);
}
