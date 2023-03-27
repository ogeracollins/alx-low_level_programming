#include "main.h"
#include <stdio.h>

/**
*print_array - Print n elements of an array
*@a:Array
*@n: Elements of array to be printed
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
}
