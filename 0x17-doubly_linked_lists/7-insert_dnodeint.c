#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inser node at index in dllist
 *
 * @h: head of dllist
 * @idx: index to insert node to
 * @n: node value
 *
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iterator;
	unsigned int i = 0;
	dlistint_t *new;

	iterator = *h;
	if (!iterator)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (iterator->prev)
		iterator = iterator->prev;

	for (i = 0; i < idx; i++)
	{
		if (!iterator)
		{
			return (NULL);
		}
		iterator = iterator->next;
	}
	if (!iterator->next)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	iterator->prev->next = new;
	new->prev = iterator->prev;
	iterator->prev = new;
	new->next = iterator;

	return (new);
}
