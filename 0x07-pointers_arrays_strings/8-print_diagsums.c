#include "main.h"
#include <stdio.h>
/**
*print_diagsums - Print sum of diagonals
*@a: Pointer to square matrix
*@size: Size of matrix
*/

void print_diagsums(int *a, int size)
{
	int i;
	int len = 0;
	int row = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
		len += a[i];
	for (i = size - i; i < size - i; i += size - 1)
		row += a[i];

	printf("%d, %d\n", len, row);
}
