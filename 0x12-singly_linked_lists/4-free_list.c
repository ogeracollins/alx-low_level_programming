/*
 *Author: Collins Ogera
 *Date: 2/5/2023
 */

#include "lists.h"

/**
 *free_list - Free a list
 *@head: Beginning of list
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{}
	free(head);
}
