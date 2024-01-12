#include "lists.h"

/**
 * sum_dlistint - this returns the sum of all the data (n)
 * of the doubly linked lists
 *
 * @head: the list head
 * @Return: the sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
	while (head->prev != NULL)
	head = head->prev;
	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	}
	return (sum);
}
