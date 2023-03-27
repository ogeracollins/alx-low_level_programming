/*
*Author: Collins Ogera
*Date: 3/27/2023
*/

#include "main.h"

/**
*swap_int - Swap values of two integers
*@a: Pointer to first int
*@b: Pointer to second int
*/
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
