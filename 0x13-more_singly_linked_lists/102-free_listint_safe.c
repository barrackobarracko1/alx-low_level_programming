#include "lists.h"

/**
* free_listint_safe - function which frees a linked list
* @h: the pointer to first node in the linked list
* Return: the number of elements in the freed list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dff;
	listint_t *temp;

	if (!h || !*h)
	return (0);
	while (*h)
	{
	dff = *h - (*h)->next;
	if (dff > 0)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	len++;
	}
	else
	{
	free(*h);
	*h = NULL;
	len++;
	break;
	}
	}
	*h = NULL;
	return (len);
}
