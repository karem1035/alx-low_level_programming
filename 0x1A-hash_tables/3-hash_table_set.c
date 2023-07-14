#include "hash_tables.h"
hash_node_t *c_new_node(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_set - set a node at hash tables.
 * @ht: the table pointer.
 * @key: the key of the node.
 * @value: the value of the key.
 * Return: 0 if failed 1 if succeded
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	index = key_index((const unsigned char *) key, ht->size);
	new_node = c_new_node(ht, key, value);
	if (new_node == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			current = current->next;
		}
		ht->array[index] = new_node;
	}
	return (1);
}

/**
 * c_new_node - create a new node:
 * @ht: the table
 * @key: the key
 * @value: the value of the key
 * Return: new_node
 */
hash_node_t *c_new_node(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (new_node);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (ht == NULL || key == NULL || *key == '\0')
		return (new_node);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (new_node);
	}
	return (new_node);
}
