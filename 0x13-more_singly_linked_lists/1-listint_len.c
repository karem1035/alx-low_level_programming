#include "lists.h"
/**
 * listint_len - returns the len of a list.
 * @h: a pointer to the first member of a list.
 * Retrun: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
