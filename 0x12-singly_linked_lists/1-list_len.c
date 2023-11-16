#include <stdlib.h>
#include "lists.h"

/**
* list_len - function which returns the number of elements in a linked list
* @h: a pointer to the list_t list
* Return: the number of elements in h
*/

size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
	d++;
	h = h->next;
	}
	return (d);
}
