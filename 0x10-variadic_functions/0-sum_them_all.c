/*
 *Author: Collins Ogera
 *Date: 4/20/2023
*/
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Sum arguments of variadic func
 *@n: Number of arg expected
 *
 *Return: Summation
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);

	return (sum);
}
