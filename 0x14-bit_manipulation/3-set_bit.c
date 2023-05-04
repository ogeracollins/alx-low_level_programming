#include "main.h"

/**
 *set_bit - Set 1 at given index
 *@n: Pointer to int
 *@index: Position to set bit
 *
 *Return: 1 if successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((*n |= 1 << index) ? 1 : -1);
}
