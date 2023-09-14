#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node at end of list
 *
 * @head: pointer to head of list
 * @n: value of new node
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	tmp = *head;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;

		new->prev = tmp;
		tmp->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
