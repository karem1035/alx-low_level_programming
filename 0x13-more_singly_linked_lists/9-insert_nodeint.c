#include "lists.h"
/**
 * insert_nodeint_at_index - insert node into another node at a givin index;
 * @head: the pointer to the list.
 * @idx: the index to be inserted on.
 * @n: the value of the new node.
 * Return: pointer to new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	current_node = *head;
	while (i != idx)
	{
		if (current_node == NULL)
		{
			return (NULL);
		}
		current_node = current_node->next;
		i++;
	}
	new_node->n = n;
	new_node = current_node;
	new_node->next = current_node->next;
	return (new_node);
}
