#include "hash_tables.h"
/**
 * hash_table_create - create a hash table.
 * @size: the size of the table.
 * Return: the table pointer.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t));
	h_table->array = malloc(size * sizeof(hash_node_t));
	h_table->size = size;

	for (i = 0; i < size; i++)
	{
		h_table->array[i] = NULL;
	}
	return (h_table);
}
