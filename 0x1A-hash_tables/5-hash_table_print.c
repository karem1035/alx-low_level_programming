#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table.
 * @ht: the hash table pointer.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int i;
	int j = 0;

	printf("{");
	if (!ht)
		return;
	
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			if (j > 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			j++;
		}
	}
	printf("}\n");
}
