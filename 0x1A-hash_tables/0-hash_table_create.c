#include "hash_tables.h"
/**
 * hash_table_create - create a hash table.
 * @size: the size of the table.
 * Return: the table pointer.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *h_table = NULL;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->array = malloc(size * sizeof(hash_node_t *));
	if (h_table->array == NULL)
		return (NULL);

	h_table->size = size;

	while (i < size)
	{
		h_table->array[i] = NULL;
		i++;
	}
	return (h_table);
}
