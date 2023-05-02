#include "lists.h"
/**
 * get_nodeint_at_index - gets the node value at a given index.
 * @head: the head of the list.
 * @index: the index of the node wanted.
 * Return: a pointer to the node at the index/or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	current_node = head;
	while (i != index)
	{
		if (current_node->next == NULL)
		{
			return (NULL);
		}
		current_node = current_node->next;
		i++;
	}
	return (current_node);

}
