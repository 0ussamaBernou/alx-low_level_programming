#include "lists.h"

/**
 * list_len - returns the length of the list
 *
 * @h: the pointer to the head of the list
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t length;
	list_t *ptr;

	if (ptr == NULL) {
		return (0);
	}

	ptr = (list_t *)h;
	length = 1;

	while (ptr->next != NULL)
	{
		length++;
		ptr = ptr->next;
	}
	return (length);
}

