#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_op_func - Get operator
 *@s: Operator
 *@a: number one
 *@b: Number two
 *
 *Return: Pointer to function of corespondig operator
 */

int (*get_op_func(char *s)(int a, int b))
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;	
}
