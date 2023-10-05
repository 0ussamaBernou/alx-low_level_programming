#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	index = key_index((const unsigned char *)key, ht->size);

	new = add_hash_node(&ht->array[index], value, key);
	if (!new)
	{
		return (0);
	}

	return (1);
}

/**
 * add_hash_node - add node at the beginning of listint
 *
 * @head: head of listint
 * @n: content of listint
 *
 * Return: pointer to the created node
 */
hash_node_t *add_hash_node(hash_node_t **head, const char *value,
			   const char *key)
{
	hash_node_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->key = strdup(key);
	new->value = strdup(value);

	/* if list is not empty */
	if (*head)
		new->next = (*head);

	/* if list is empty */
	else
		new->next = NULL;

	(*head) = new;

	return (new);
}
