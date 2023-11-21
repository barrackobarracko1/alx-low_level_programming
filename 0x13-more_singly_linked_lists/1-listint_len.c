#include "lists.h"

/**
* listint_len - function which returns number of elements in a linked lists
* @h: the linked list of type listint_t to traverse
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t digit = 0;

	while (h)
	{
	digit++;
	h = h->next;
	}
	return (digit);
}
