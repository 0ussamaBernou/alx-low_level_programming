#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - print dllist
 *
 * @h: list head
 *
 *
 * Return: list size
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr;
	size_t n;

	ptr = (dlistint_t *)h;
	n = 0;
	while (ptr)
	{
		n++;
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}
	return (n);
}
