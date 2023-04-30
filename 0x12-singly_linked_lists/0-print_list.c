/*
 *Author: Collins Ogera
 *Date: 4/30/2023
 */

#include "lists.h"
/**
 *print_list - Print items in each node
 *@h: Pointer to head node
 *
 *Return: Number of elements in list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		n += 1;
		h = h->next;
	}
	return (n);
}
