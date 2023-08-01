#include "lists.h"

/**
 * free_listint2 - free listint and set head to null
 *
 * @head: pointer to head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if(!head)
		return;

	while ((*head))
	{
		ptr = (*head);
		(*head) = (*head)->next;
		free(ptr);
	}
	free((*head));

	(*head) = NULL;
}

