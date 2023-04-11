/*
*Author: Collins Ogera
*Date: 4/11/2023
*/
#include <stdlib.h>

/**
*create_array - Create an array using malloc
*@size: Size of array
*@c: Character to add in array
*
*Return: Pointer to created array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(arr));

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
