#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at the beginning of listint
 *
 * @head: head of listint
 * @n: content of listint
 *
 * Return: pointer to the created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);

	(*head) = new;

	return (new);
}

