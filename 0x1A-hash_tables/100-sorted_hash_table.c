#include "hash_tables.h"
#include <string.h>

shash_table_t *shash_table_create(unsigned long int size)
{

	unsigned long int i;
	shash_table_t *thead;

	thead = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (!thead)
	{
		free(thead);
		return (NULL);
	}

	thead->size = size;
	thead->shead = NULL;
	thead->stail = NULL;

	thead->array = (shash_node_t **)calloc(size, sizeof(shash_node_t *));
	if (!(thead->array))
	{
		free(thead->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		thead->array[i] = NULL;

	return (thead);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;
	shash_node_t *node;
	char *new_val;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			/* FREE THE OLD VALUE */
			free(node->value);

			new_val = strdup(value);
			if (!new_val)
				return (0);
			node->value = new_val;
			return (1);
		}
		node = node->next;
	}
	new = add_shash_node(&ht->array[index], value, key);
	if (!new)
	{
		free(new);
		return (0);
	}
	insert_shash_node(&ht->shead, &ht->stail, &new);

	return (1);
}

void insert_shash_node(shash_node_t **shead, shash_node_t **stail,
		       shash_node_t **node)
{
	shash_node_t *tmp;

	/* Check for NULL nodes. */
	if (*node == NULL)
		return;

	(*node)->snext = NULL;
	(*node)->sprev = NULL;

	/* IF HEAD IS NULL */
	if (!*shead)
	{
		*shead = *node;
		*stail = *node;
		return;
	}

	tmp = *shead;
	while (tmp)
	{
		if ((*node)->key[0] < tmp->key[0])
		{
			if (tmp->sprev)
			{
				tmp->sprev->snext = *node;
				(*node)->sprev = tmp->sprev;
			}
			else
			{
				*shead = *node;
			}
			(*node)->snext = tmp;
			tmp->sprev = *node;
			return;
		}

		if (!tmp->snext)
		{
			tmp->snext = *node;
			(*node)->sprev = tmp;
			*stail = *node;
			return;
		}

		tmp = tmp->snext;
	}
}

shash_node_t *add_shash_node(shash_node_t **head, const char *value,
			     const char *key)
{
	shash_node_t *new;
	char *new_key;
	char *new_value;

	if (!head)
		return (NULL);

	new = malloc(sizeof(shash_node_t));
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
char *shash_table_get(const shash_table_t *ht, const char *key)
{

	unsigned long int index;
	char *value;
	shash_node_t *node;

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

void shash_table_print(const shash_table_t *ht)
{

	shash_node_t *node;
	unsigned int printed;

	if (!ht)
		return;

	printf("{");
	printed = 0;
	while (node)
	{
		node = ht->shead;
		while (node)
		{
			if (printed == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				printed++;
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
			node = node->snext;
		}
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{

	shash_node_t *node;
	unsigned int printed;

	if (!ht)
		return;

	printf("{");
	printed = 0;
	node = ht->stail;
	while (node)
	{
		if (printed == 0)
		{
			printf("'%s': '%s'", node->key, node->value);
			printed++;
		}
		else
		{
			printf(", '%s': '%s'", node->key, node->value);
		}
		node = node->sprev;
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{

	unsigned long int i;
	shash_node_t *node;
	shash_node_t *head;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			node = head;
			head = head->next;
			free(node->value);
			free(node->key);
			free(node);
		}
	}

	free(ht->array);
	free(ht);
}
