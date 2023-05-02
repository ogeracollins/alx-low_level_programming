/*
 *Author: Collins Ogera
 *Date: 3/5/2023
 */

#include "lists.h"

/**
 *add_nodeint - Add a node at begin
 *@head: Pointer to pointer to head
 *@n: Integer to add to node
 *
 *Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL || !n)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
