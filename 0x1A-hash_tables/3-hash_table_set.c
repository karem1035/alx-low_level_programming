#include "hash_tables.h"
int create_node(hash_node_t *new_node, const char *key, const char *value);
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

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (create_node(new_node, key, value))
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
		current = ht->array[index];
		ht->array[index] = new_node;
		new_node->next = current;
	}
	return (1);
}
/**
 * create_node - creates and check the new node.
 * @new_node: new node pointer.
 * @key: the key of the new node.
 * @value: the value of the new node.
 * Return: 0 if success 1 if fails.
 */
int create_node(hash_node_t *new_node, const char *key, const char *value)
{
	if (new_node == NULL)
		return (1);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (1);
	}

	return (0);
}
