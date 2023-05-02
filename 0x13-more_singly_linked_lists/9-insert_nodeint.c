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

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
