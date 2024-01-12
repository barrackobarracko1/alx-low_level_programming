#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of dlistint_t
 * linked list
 * @head: the list head
 * @index: nth node index
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	x = 0;
	while (head != NULL)
	{
		if (x == index)
		break;
	head = head->next;
	x++;
	}
	return (head);
}
