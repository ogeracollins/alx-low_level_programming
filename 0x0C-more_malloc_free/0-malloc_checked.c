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
	void *ass;

	ass = malloc(b);

	if (ass == NULL)
		exit(98);
	return (ass);
}
