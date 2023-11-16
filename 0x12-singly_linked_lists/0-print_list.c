#include <stdio.h>
#include "lists.h"

/**
* print_list - function which prints all elements of a linked list
* @h: a pointer to list_t list to print
* Return: nodes printed
*/

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	m++;
	}
	return (m);
}
