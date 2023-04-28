#include "lists.h"

/**
 * list_len - returns the length of a linked list.
 * @h: the pointer to the first node.
 *
 * Return: count of the nodes.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (!h)
	{
		return (count);
	}

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
