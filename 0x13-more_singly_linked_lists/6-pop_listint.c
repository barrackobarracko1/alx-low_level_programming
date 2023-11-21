#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a linked list
* @head: a pointer to the first element in the linked list
* Return: data inside the elements that was deleted,
* or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int digit;

	if (!head || !*head)
	return (0);
	digit = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (digit);
}
