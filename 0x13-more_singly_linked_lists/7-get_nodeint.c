#include "lists.h"

/**
 * get_nodeint_at_index - get lists node at a given index
 *
 * @head: head of the list
 * @index: index of the node
 *
 * Return: the node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	if (!ptr)
		return (NULL);

	return (ptr);
}

