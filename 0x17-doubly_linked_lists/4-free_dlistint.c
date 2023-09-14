#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free dllinst
 * @head: head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	head = head;
	while (head)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
	free(head);
}
