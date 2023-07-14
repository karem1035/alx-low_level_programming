#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int index, i;
        hash_node_t *new_node;

	if (ht == NULL)
		return (0);

        index = key_index((const unsigned char *) key, ht->size);

        new_node = malloc(sizeof(hash_node_t));
        if (new_node == NULL)
                return (1);
        new_node->key = strdup(key);
        new_node->value = strdup(value);
        if (ht->array[index] == NULL)
                ht->array[index] = new_node;
        else
                while (i < ht->size)
                {
                        if (ht->array[i] == NULL)
                                ht->array[i] = new_node;
                        i++;
                }
        return (0);
}
