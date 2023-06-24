#include "lists.h"
/**
 * free_dlistint - frees a linked list.
 * @head: the head of the dllist.
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
