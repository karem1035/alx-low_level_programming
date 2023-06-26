#include "lists.h"
/**
 * insert_dnodeint_at_index - inset node at index.
 * @h: the head of the dllist.
 * @n: the n value of the list.
 * @idx: the index of the node to be inserted.
 * Return: the value of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while (i < idx - 1)
	{
		i++;
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
