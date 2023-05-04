#include "main.h"

/**
 *clear_bit - Set value of bit to 0
 *@n: Pointer to int
 *@index: Position to alter
 *
 *Return: 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);
}
