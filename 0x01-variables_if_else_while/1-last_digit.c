#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Starting point of program
*
*Return: 0 as default value
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int mod = n % 10;

	if (mod < 0)
		mod = mod * -1;

	if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	else if (mod == 0)
		printf("Last digit of %d is %d and is 0\n", n, mod);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);

	return (0);
}
