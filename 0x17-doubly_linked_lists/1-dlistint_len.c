#include "lists.h"
/**
 * dlistint_len - gets the len of a list.
 * @h: the header of the list
 * Return: the len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
