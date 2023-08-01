#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - return number of nodes
 *
 * @h: head of a listint
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
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
		ptr = ptr->next;
	}

	return (nodes);
}

