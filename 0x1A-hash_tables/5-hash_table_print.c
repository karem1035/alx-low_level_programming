#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table.
 * @ht: the hash table pointer.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}
