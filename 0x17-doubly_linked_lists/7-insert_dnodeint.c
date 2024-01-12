#include "lists.h"

/*
 * insert_dnodeint_at_index - this inserts new node in a dlistint_t
 * list at a given position.
 * @h: pointer to the head of the dlistint_t list.
 * @idx: position to insert the new node.
 * @n: integer for the new node to contain.
 *
 * Return: NULL if the function fails, or address of the new node if successful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	/* If the index is 0, insert at the beginning of the list. */
	if (idx == 0)
	return (add_dnodeint(h, n));

	/* Traverse the list to reach the desired position. */
	for (; idx != 1; idx--)
	{
	tmp = tmp->next;
	if (tmp == NULL)
	return (NULL);
	}

	/* If the desired position is at the end, insert at the end of the list. */
	if (tmp->next == NULL)
	return (add_dnodeint_end(h, n));

	/* Allocate memory for the new node. */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	/* Set the value of the new node and update the links. */
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
