/*
*Author: Collins Ogera
*Date: 4/14/2023
*/

#include "main.h"
#include <stdlib.h>
/**
*array_range - Creates an array of integers
*@min: Minimum value
*@max: Maximum value
*
*Return: Pointer to new array
*/
int *array_range(int min, int max)
{
	int *a;
	int j, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	a = malloc(size * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < size && min <= max; j++, min++)
		*(a + j) = min;
	return (a);
}
