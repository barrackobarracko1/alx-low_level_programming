#include "lists.h"

/**
* print_listint - function that prints all elements of a linked list
* @h: the linked list of type listint_t to print
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
	printf("%d\n", h->n);
	digit++;
	h = h->next;
	}
	return (digit);
}
