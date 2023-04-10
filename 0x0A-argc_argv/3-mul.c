#include <stdio.h>
#include <stdlib.h>

/**
*main - Multiply two numbers
*@argc: Arguement count
*@argv: Argument vector
*
*Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int result, val1, val2;

	if (argc == 3)
	{
		printf("Error\n");
		return (1);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[2]);

	result = val1 * val2;
	printf("%d\n", result);

	return (0);
}
