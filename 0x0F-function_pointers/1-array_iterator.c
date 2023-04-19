#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - Execute a function on each element
 *@array: Array of elements to execute function
 *@size: Size of array
 *@action: Pointer to function to execute
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
