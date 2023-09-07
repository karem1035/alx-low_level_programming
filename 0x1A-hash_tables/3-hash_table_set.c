#include "hash_tables.h"
/**
 * hash_table_set - adding a node at the hash table
 * @ht: the hash table
 * @key: the key of the node.
 * @value: the value of the key.
 * Return: 0 if it is succeded 1 if it is not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node, *tmp;
	char *ckey, *cvalue;

	if (ht == NULL || strlen(key) == 0)
		return (0);

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
	/* If node exist replace the value*/

	node->key = strcpy(ckey, key);
	node->value = strcpy(cvalue, value);

	if (ht->array[index] != NULL)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (tmp->key == ckey)
			{
				tmp->value = cvalue;
				free(node);
				return (1);
			}
			tmp = tmp->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	else
	{
		ht->array[index] = node;
		node->next = NULL;
		return (1);
	}

	return (0);
}