#include "hash_tables.h"
/**
 * hash_table_set - adding a node at the hash table
 * @ht: the hash table
 * @key: the key of the node.
 * @value: the value of the key.
 * Return: 0 if it is succeded 1 if it is not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);

	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (tmp->key == key)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		new_node = create_node(key, value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		new_node = create_node(key, value);
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}