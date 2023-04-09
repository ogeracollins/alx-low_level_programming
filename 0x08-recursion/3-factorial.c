/*
*Author: Collins Ogera
*Date: 4/9/2023
*/
#include "main.h"

/**
*factorial - Return factorial of a given number
*@n: Number to get its factorial
*
*Return: Factorial n
*/
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
