#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - get value of a key in the hash table
 *
 * @ht: hash table
 * @key: the key
 *
 * Return: the value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	value = NULL;
	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			value = strdup(node->value);
			break;
		}
		node = node->next;
	}

	return (value);
}
