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
	listint_t *ptr, *ptr1;
	unsigned int i;

	if (!head)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	ptr = (*head);
	for (i = 0; i < index - 1 && ptr; i++)
	{
		ptr = ptr->next;
	}

	if (!ptr || !ptr->next)
		return (-1);

	ptr1 = ptr;

	free(ptr->next);

	if (!ptr1->next->next)
		ptr->next = NULL;
	else
		ptr->next = ptr1->next->next;

	return (1);
}

