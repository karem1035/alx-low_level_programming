#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (current)
			{
				free(current->key);
				free(current->value);
				free(current);
				current = current->next;
			}
		}
	}
}
