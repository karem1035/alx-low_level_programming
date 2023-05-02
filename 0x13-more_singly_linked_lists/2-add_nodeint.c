#include "lists.h"
/**
 * add_nodeint - add node to the first item of a linkedlist.
 * @head: the head address of the list.
 * @n: the element value.
 * Return: pointer to the new head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
