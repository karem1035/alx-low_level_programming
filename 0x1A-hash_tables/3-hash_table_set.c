#include "hash_tables.h"
/**
 * hash_table_set - adding a node at the hash table
 * @ht: the hash table
 * @key: the key of the node.
 * @value: the value of the key.
 * Return: 1 if it is succeded 0 if it is not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				free(new_node);
				tmp->value = strdup(value);
				return (1);
			}
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	ht->array[index] = new_node;
	return (1);
}
