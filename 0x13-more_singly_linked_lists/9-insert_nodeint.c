#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: ptr to head of the list
 * @idx: index of the new node
 * @n: data of the new node
 *
 * Return: pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	ptr = (*head);

	for (i = 0; i < idx - 1; i++)
	{
		if (!ptr)
			return (NULL);
		ptr = ptr->next;
	}

	new->next = ptr->next;
	ptr->next = new;

	return (new);
}

