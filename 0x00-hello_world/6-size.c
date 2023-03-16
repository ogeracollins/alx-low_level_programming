#include <stdio.h>

/**
*main - Starting point of program
*
*Return: O by default
*/

int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (long) sizeof(int));
	printf("Size of a long long int: %lld byte(s)\n", (long long) sizeof(int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));

	return (0);
}
