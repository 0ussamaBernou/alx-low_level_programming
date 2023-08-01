#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end of the list
 *
 * @head: head of the list
 * @n: content of the node
 *
 * Return: pointer to the created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	ptr = (*head);
	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!(*head))
		(*head) = new;
	else
	{
		while ((ptr)->next)
		{
			ptr = ((ptr)->next);
		}
		(ptr)->next = new;
	}

	return (new);
}
