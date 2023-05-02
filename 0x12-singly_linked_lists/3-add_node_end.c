/*
 *Author: Collins Ogera
 *Date: 1/05/2023
 */

#include "lists.h"
#include <string.h>

/**
 *add_node_end - Add node at end of list
 *@head: Beginning of node
 *@str: String to add to node
 *
 *Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *presentNode, *newNode;
	char *newStr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	newStr = malloc(len * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	newStr = strdup(str);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = newStr;
	newNode->len = len;
	newNode->next = NULL;

	free(newStr);
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	presentNode = *head;
	while (presentNode->next != NULL)
		presentNode = presentNode->next;
	presentNode->next = newNode;
	return (*head);
}
