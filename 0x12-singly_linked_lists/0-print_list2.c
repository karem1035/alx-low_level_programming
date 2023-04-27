#include "lists.h"

/**
 * print_list - prints all liked list nodes.
 * @h: the first node pointer.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int c = 0;

	if (h == NULL)
	{
		return (c);
	}

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		c++;
	}

	return (c);
}
