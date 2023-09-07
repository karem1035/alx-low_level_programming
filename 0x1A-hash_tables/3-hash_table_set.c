#include "hash_tables.h"
/**
 * hash_table_set - adding a node at the hash table
 * @key: the key of the node.
 * @value: the value of the key.
 * Return: 0 if it is succeded 1 if it is not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node;
	char *ckey, *cvalue;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	ckey = malloc(sizeof(key));
	if (!ckey)
		return (0);

	cvalue = malloc(sizeof(value));
	if (!cvalue)
	{
		free(node);
		free(ckey);
		return (0);
	}
	node->key = strcpy(ckey, key);
	node->value = strcpy(cvalue, value);

	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
	{
		ht->array[index] = node;
		node->next = NULL;
	}

	return (0);
}