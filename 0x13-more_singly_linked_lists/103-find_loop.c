#include "lists.h"

/**
* find_listint_loop - function which finds the loop in a linked list
* @head: the linked list to be search for
* Return: the address of the node at the start of the loop, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gradual = head;
	listint_t *quick = head;

	if (!head)
	return (NULL);
	while (gradual && quick && quick->next)
	{
	quick = quick->next->next;
	gradual = gradual->next;
	if (quick == gradual)
	{
	gradual = head;
	while (gradual != quick)
	{
	gradual = gradual->next;
	quick = quick->next;
	}
	return (quick);
	}
	}
	return (NULL);
}
