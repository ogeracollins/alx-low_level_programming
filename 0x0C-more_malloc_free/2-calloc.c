/*
*Author: Collins Ogera
*Date: 4/14/2023
*/

#include "main.h"
#include <stdlib.h>

/**
*_calloc -  Allocate memory using malloc
*@nmemb: Number of elements
*@size: Bytes of each element
*
*Return: Pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
