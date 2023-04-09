/*
*Author: Collins Ogera
*Date: 4/9/2023
*/
#include "main.h"

/**
*_pow_recursion - Get power of a number
*@x: Base
*@y: Power
*
*Return: Power of number
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
