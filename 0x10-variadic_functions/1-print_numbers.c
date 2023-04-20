/*
 *Author: Collins Ogera
 *Date: 4/20/2023
*/
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - Function to print vararg
 *@separator: Separates arguments
 *@n: Number of arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%c ", *separator);
		}
	}
	printf("\n");
}
