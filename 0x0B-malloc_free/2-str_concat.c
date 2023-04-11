/*
*Author: Collins Ogera
*Date: 4/11/2023
*/
#include <stdlib.h>
/**
*str_concat - Concat two strings using malloc
*@s1: String one
*@s2: String two
*
*Return: Pointer to concated string
*/

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int len, s1len, s2len, i;

	for (s1len = 0; s1[s1len] != '\0'; s1len++)
	{}
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
	{}
	len = s1len + s2len;

	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		dest[i] = s1[i];
	for (i = 0; i < s2len; i++)
		dest[s1len + i] = s2[i];
	dest[len] = '\0';
	return (dest);
}
