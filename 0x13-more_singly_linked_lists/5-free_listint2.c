#include "lists.h"
/**
 * free_listint2 - frees a linked list.
 * @head: the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
