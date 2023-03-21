#include "main.h"

/**
*print_sign - Print sign of a number
*@n: Number to check sign
*
*Return: 1 if +ve ,0 if 0, -1 if -ve
*/

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
