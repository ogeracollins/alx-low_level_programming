#include <unistd.h>

/**
*_putchar - write the character c to stdout
*@c: Character to print
*
*Return: 1 on success
*On error, -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
