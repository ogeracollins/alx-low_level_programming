/*
*Author: Collins Ogera
*Date: 4/19/2023
*/
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - Add two numbers
 *@a: Value one
 *@b: Value two
 *Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - Subtruct two values
*@a: Value one
*@b: Value two
*Return: Difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Multiply two values
 *@a: Value one
 *@b: Value two
 *Return: Multiplied values
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - Divide two values
*@a: Value one
*@b: Value two
*Return: Divisible value
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - Modulus of two values
*@a: Value one
*@b: Value two
*Return: Remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
