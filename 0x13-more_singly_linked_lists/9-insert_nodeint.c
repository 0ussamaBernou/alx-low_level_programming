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

	if (idx == 0)
	{
		new = add_nodeint(head, n);
		return (new);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	ptr = (*head);

	for (i = 0; i < idx - 1 && ptr; i++)
	{
		ptr = ptr->next;
	}

	if (!ptr)
	{
		free(new);
		return (NULL);
	}

	if (!ptr->next)
		new->next = NULL;
	else
		new->next = ptr->next;

	ptr->next = new;

	return (new);
}
