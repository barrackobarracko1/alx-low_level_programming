#include "lists.h"

/**
* sum_listint - function that calculates the sum of all
* data in a listint_t list
*
* @head: the first node in the linked list
* Return: the resulting sum
*/

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
	add += temp->n;
	temp = temp->next;
	}
	return (add);
}
