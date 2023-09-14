#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node in beginnig of list
 *
 * @head: double ptr to head node
 * @n: value of new node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = (*head)->next;
	new->prev = (*head);
	(*head)->next = new;

	return (new);
}
