#include "lists.h"
/**
 * delete_nodeint_at_index - to delete a node at certain index.
 * @head: the head of the list.
 * @index: the index of the node to be deleted.
 * Return: 1 if succeeded -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node, *to_delete_node;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	current_node = *head;
	while (i < index - 1)
	{
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL || current_node->next == NULL)
	{
		return (-1);
	}
	to_delete_node = current_node->next;
	current_node->next = to_delete_node->next;
	free(to_delete_node);
	return (1);
}
