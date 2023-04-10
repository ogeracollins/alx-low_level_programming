#include <stdio.h>

/**
*main - Print all arguments
*@argc: Argument count
*@argv: Argument vector
*
*Return: On success 0
*/

int main(int argc, char *argv[])
{
	int count;

	if (count > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
