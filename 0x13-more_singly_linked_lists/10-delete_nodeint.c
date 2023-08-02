#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeded -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = (*head);
	for (i = 0; i < index - 1; i++)
	{
		if (!ptr)
			return (-1);
		ptr = ptr->next;
	}
	free(ptr->next);
	ptr->next = ptr->next->next;

	return (1);
}

