/*
*Author: Collins Ogera
*Date:4/14/2023
*/

#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - ALlocate memory
*@b: Quantity to allocate
*
*Return: Pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *ass;

	ass = malloc(sizeof(int) * b);

	if (ass == NULL)
		return (NULL);
	return (ass);
}
