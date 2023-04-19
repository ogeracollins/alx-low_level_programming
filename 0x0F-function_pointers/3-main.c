#include "3-calc.h"
#include "3-function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Perform calculation
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: 0 on success
 *98, 99, 100 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operand;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operand = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operand) == NULL)
	{
		print("Error"\n);
		exit(99);
	}

	if ((*operand == '/' && num2 == 0) ||
			(*operand == '%' && num2 == 0))
	{
		printf("Error");
		exit(100);
	}
	printf("%d \n", get_op_func(op)(num1, num2));

	return (0);
}

