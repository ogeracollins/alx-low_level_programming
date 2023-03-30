#include "main.h"

/**
*_strcat - Concat two strings
*@dest: Destination string
*@src: Source string
*
*Return: Return concatenated destination string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int destLength = strlen(dest);

	if (dest[destLength] == '\0')
	{
		destLength = destLength - 1;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';

	return (dest);
}
