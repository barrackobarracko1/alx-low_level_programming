#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts new node in a linked list,
* at a given position
* @head: a pointer to the first node in the list
* @idx: the index where the new node is added
* @n: the data to insert in the new node
* Return: a pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g;
	listint_t *fresh;
	listint_t *temp = *head;

fresh = malloc(sizeof(listint_t));
	if (!fresh || !head)
	return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
	fresh->next = *head;
	*head = fresh;
	return (fresh);
	}
	for (g = 0; temp && g < idx; g++)
	{
	if (g == idx - 1)
	{
	fresh->next = temp->next;
	temp->next = fresh;
	return (fresh);
	}
	else
	temp = temp->next;
	}
	return (NULL);
}
