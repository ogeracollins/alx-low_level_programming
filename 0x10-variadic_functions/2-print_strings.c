/*
*Author: Collins Ogera
*Date: 4/20/2023
*/
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - Print a string using pointers
 *@separator: Sep printed strings
 *@n: Number of argument
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	va_end(args);
	printf("\n");
}
