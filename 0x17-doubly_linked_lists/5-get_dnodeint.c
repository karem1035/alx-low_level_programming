#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at some index.
 * @head: the head of the dllist.
 * @index: the index of the wanted node.
 * Return: the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
