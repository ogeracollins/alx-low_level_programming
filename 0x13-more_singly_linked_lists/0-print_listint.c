/*
 *Author: Collins Ogera
 *Date: 3/5/2023
 */

#include "lists.h"
/**
 *print_listint - Print elements of a list
 *@h: Pointer to first element
 *
 *Return: Number of elements
 */


size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		num += 1;
		h = h->next;
	}
	printf("%d\n", h->n);
	num += 1;

	return (num);
}
