#include "hash_tables.h"
/**
 * hash_table_get - gets the value from the table
 * @ht: the hash table.
 * @key: the key we have.
 * Return: the value of that key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
		return (ht->array[index]->value);
	return (NULL);
}
