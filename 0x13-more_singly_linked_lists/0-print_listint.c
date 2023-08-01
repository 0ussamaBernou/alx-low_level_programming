#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - print nodes of listint
 *
 * @h: head of a listint
 *
 * Return: numer of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	size_t nodes;

	if (!h)
		return (0);

	nodes = 0;
	ptr = (listint_t *)h;

	while (ptr)
	{
		nodes++;
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}

	return (nodes);
}

