/*
 *Author: Collins Ogera
 *Date: 3/5/2023
 */
#include "lists.h"

/**
 *sum_listint - Sum ofn
 *@head: Head of linked list
 *
 *Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->next;

	return (sum);
}
