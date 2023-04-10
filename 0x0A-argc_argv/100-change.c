#include <stdio.h>
#include <stdlib.h>

/**
*main - Return change / balance
*@argc: Argument count
*@argv: Argument vector
*
*Return: Total coins to be given
*/

int main(int argc, char *argv[])
{
	int cents, change;

	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = 0;
	change = atoi(argv[1]);
	while (change != 0)
	{
		if (change > 25)
		{
			cents += (change / 25);
			change = change % 25;
		}
		else if (change > 10)
		{
			cents += (change / 10);
			change = change % 10;
		}
		if (change > 5)
		{
			cents += (change / 5);
			change = change % 5;
		}
		if (change > 2)
		{
			cents += (change / 2);
			change = change % 2;
		}
		else if (change == 1)
		{
			cents += 1;
			change = 0;
		}
	}
	printf("%d\n", cents);
	return (0);
}
