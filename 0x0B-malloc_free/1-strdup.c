/*
*Author: Collins Ogera
*Date: 4/11/2023
*/
#include <stdlib.h>

/**
*_strdup - Duplicate string using malloc
*@str: String to duplicate
*
*Return: Pointer to dest
*/

char *_strdup(char *str)
{
	char *dest;
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
	{}
i
	dest = malloc(sizeof(str) * len);

	if (dest == NULL)
		return (1);
	for (i = 0; i < len; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}