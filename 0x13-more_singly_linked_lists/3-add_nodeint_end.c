/*
 *Author: Collins Ogera
 *Date: 3/5/2023
 */
#include "lists.h"

/**
 *add_nodeint_end - Add node to end of list
 *@head: Pointer to pointer of head
 *@n: Number to add
 *
 *Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *new;

	if (!n)
		return (NULL);
	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = new;

	return (*head);
}
