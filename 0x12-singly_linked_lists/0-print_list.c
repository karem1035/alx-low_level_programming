#include "lists.h"

/**
 * print_list - prints all liked list nodes.
 * @h: the first node pointer.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	int nodes_n = 0;

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
		nodes_n++;
	}

	return (nodes_n);
}
