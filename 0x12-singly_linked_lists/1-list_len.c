/*
 *Author: Collins Ogera
 *Date: 4/30/2023
 */
#include "lists.h"

/**
 *list_len - Number of elements in a list
 *@h: Pointer to head
 *
 *Return: Length of list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		n += 1;
		h = h->next;
	}
	return (n);
}
