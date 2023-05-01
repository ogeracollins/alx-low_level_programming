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
	list_t *newNode;

	if (str == NULL || head == NULL)
		return (NULL);
	len = strlen(str);

	newNode = *head;

	newStr = malloc(len * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	newStr = strdup(str);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		free(newStr);
		return (NULL);
	newNode->str = newStr;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
