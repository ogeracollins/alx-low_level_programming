/*
 *Author: Collins Ogera
 *Date: 4/30/2023
 */

#include "lists.h"
#include <string.h>
/**
 *add_node - Add a new node to list;
 *@head: Start of the node
 *@str: String to add
 *
 *Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *newStr;
	list_t *new_node;

	if (str == NULL || *head == NULL)
		return (NULL);
	len = strlen(str);

	newStr = malloc((len + 1) * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	newStr = strdup(str);

	new_node = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = newStr;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
