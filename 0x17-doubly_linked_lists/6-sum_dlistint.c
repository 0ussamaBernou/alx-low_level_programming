#include "lists.h"

/**
 * sum_dlistint - sum dllist
 *
 * @head: head of dllist
 *
 * Return: sum of dllist
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *iterator;
	int sum = 0;

	iterator = head;

	for (; iterator; iterator = iterator->next)
	{
		sum += iterator->n;
	}

	return (sum);
}
