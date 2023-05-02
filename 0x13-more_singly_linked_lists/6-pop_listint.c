#include "lists.h"
/**
 * pop_listint - deletes the first node.
 * @head: pointer to the first node.
 * Return: 0 if list is empty/ the value of list.
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *current_node;

	if (!head)
	{
		return (0);
	}

	current_node = *head;
	*head = (*head)->next;
	i = current_node->n;
	free(current_node);
	return (i);
}
