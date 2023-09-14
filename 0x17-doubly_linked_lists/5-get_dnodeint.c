#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: head of dllist
 * @index:index of node to return
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	for (i = 0; i < index; i++)
	{
		node = node->next;
	}

	return (node);
}
