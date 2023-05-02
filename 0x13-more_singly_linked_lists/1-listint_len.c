/*
 *Author: Collins Ogera
 *Date: 3/5/2023
 */

#include "lists.h"

/**
 *listint_len - Length of list
 *@h: Ponter to list head
 *
 *Return: Length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h->next != NULL)
	{
		num += 1;
		h = h->next;
	}
	num += 1;

	return (num);
}
