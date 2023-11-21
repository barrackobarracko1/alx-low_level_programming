#include "lists.h"

/**
* add_nodeint - function which adds new node the beginning of a linked list
* @head: a pointer to the first node in the list
* @n: the data to insert in that new node
* Return: a pointer to new node, or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
	return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;
	return (fresh);
}
