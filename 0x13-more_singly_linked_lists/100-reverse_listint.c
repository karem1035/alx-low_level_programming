#include "lists.h"
/**
 * reverse_listint - reverse a list.
 * @head: the head address of the list.
 * Return: a pointer to the new list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
