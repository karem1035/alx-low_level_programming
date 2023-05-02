#include "lists.h"
/**
 * free_listint2 - frees a linked list.
 * @head: the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *tmp_node;

	if (*head)
	{
		current_node = *head;
		while (current_node)
		{
			temp = current_node;
			current_node = current_node->next;
			free(temp);
		}
		*head = NULL;
	}
}
