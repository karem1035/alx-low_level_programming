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
	listint_t *current_node, *prev_node;

	if (head == NULL || *head == NULL)
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
	for (i = 0; current_node && i < index; i++)
	{
		prev_node = current_node;
		current_node  = current_node->next;
	}
	if (current_node == NULL)
	{
		return (-1);
	}
	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}
