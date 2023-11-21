#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - function that counts the number of unique nodes
* in a looped listint_t linked list.
* @head: pointer to head of the listint_t to check
* Return: If the list is not looped - 0.
* Otherwise - number of unique nodes in the list.
*/

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *snake, *fish;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);
	snake = head->next;
	fish = (head->next)->next;

	while (fish)
	{
	if (snake == fish)
	{
	snake = head;
	while (snake != fish)
	{
	nodes++;
	snake = snake->next;
	fish = fish->next;
	}
	snake = snake->next;
	while (snake != fish)
	{
	nodes++;
	snake = snake->next;
	}
	return (nodes);
	}
	snake = snake->next;
	fish = (fish->next)->next;
	}
	return (0);
}

/**
* print_listint_safe - function that prints listint_t list safely.
* @head: pointer to the head of the listint_t list.
* Return: number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, digit = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (digit = 0; digit < nodes; digit++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
