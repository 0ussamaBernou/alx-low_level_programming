#include "hash_tables.h"
#include <string.h>
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	hash_node_t *node;

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
