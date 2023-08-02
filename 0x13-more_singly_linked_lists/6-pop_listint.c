#include "lists.h"

/**
 * pop_listint - pop the head of the list
 *
 * @head: pointer to the head of the list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (!(*head))
		return (0);

	n = (*head)->n;

	ptr = (*head)->next;

	free((*head));

	(*head) = ptr;

	return (n);
}

