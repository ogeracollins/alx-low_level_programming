#include <unistd.h>

/**
 *_putchar - writes character c to stdout
 *@c: Character to print
 *
 *Return: On success 1
 *On error, -1
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
