#include "lists.h"
/**
 * print_dlistint - prints the list items.
 * @h: the header of the list.
 * Return: the size of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
