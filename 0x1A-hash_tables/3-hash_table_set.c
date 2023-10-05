#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - set value of a key in hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 for success 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *node;
	char *new_val;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			new_val = strdup(value);
			if (!new_val)
			{
				free(new_val);
				return (0);
			}
			node->value = new_val;
			return (1);
		}
		node = node->next;
	}
	new = add_hash_node(&ht->array[index], value, key);
	if (!new)
	{
		free(new);
		return (0);
	}

	return (1);
}

/**
 * add_hash_node - add node at the beginning of list
 *
 * @head: head of listint
 * @value: value
 * @key: key
 *
 * Return: pointer to the created node
 */
hash_node_t *add_hash_node(hash_node_t **head, const char *value,
			   const char *key)
{
	hash_node_t *new;
	char *new_key;
	char *new_value;

	if (!head)
		return (NULL);

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new_key = strdup(key);
	if (!new_key)
	{
		free(new);
		free(new_key);
		return (NULL);
	}
	new->key = new_key;

	new_value = strdup(value);
	if (!new_value)
	{
		free(new);
		free(new_value);
		free(new_key);
		return (NULL);
	}
	new->value = new_value;

	/* if list is not empty */
	if (*head)
		new->next = (*head);

	/* if list is empty */
	else
		new->next = NULL;

	(*head) = new;

	return (new);
}
