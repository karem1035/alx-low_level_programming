#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table.
 * @size: the size of the array of the hash table
 * Return: Pointer to the new table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(new_table));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t) * size);
	if (!new_table->array)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
