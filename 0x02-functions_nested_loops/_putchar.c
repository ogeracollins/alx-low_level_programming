#include <unistd.h>

/**
*_putchar - writes character c to stdout
*@c: Character to write
*
*Return: On succes 1.
*On error, -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
