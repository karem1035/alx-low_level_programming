#include "hash_tables.h"
/**
 * hash_table_get - gets the value of the key from hash table.
 * @ht: the hash table pointer.
 * @key: the key to get the value from.
 * Return: the value or NULL if it failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	char *value;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	value = node->value;
	return (value);
}
