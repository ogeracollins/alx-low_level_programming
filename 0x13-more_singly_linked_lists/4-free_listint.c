/*
 *Author: Collins Ogera
 *Date: 3/5/2023
 */

#include "lists.h"

/**
 *free_listint - Free lists
 *@head: Pointer to list head
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
	{}
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);
}
