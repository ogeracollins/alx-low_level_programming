/*
*Author: Collins Ogera
*Date: 4/9/2023
*/
#include "main.h"

/**
*_strlen_recursion - Get length of a string
*@s: Pointer to string
*
*Return: Length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
