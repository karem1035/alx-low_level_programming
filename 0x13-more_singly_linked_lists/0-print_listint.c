#include "lists.h"
/**
 * print_listint - print integers in a linked list.
 * @h: a pointer to the first member of the list.
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
