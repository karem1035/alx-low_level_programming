#include "hash_tables.h"
/**
 * key_index - gets a key and returns its index on the hash table
 * @key: the key input
 * @size: the size of the hash table
 * Return: the index on the table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
