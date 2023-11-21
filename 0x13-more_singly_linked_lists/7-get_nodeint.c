#include "lists.h"

/**
* get_nodeint_at_index - a function which returns the node
* at a certain index in a linked list
*
* @head: the first node in the linked list
* @index: the index of the node to return
* Return: a pointer to the node we want, or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g = 0;
	listint_t *temp = head;

	while (temp && g < index)
	{
	temp = temp->next;
	g++;
	}
	return (temp ? temp : NULL);
}
