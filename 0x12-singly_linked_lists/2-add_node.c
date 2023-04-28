#include "lists.h"
/**
 * strl - get the length of a string.
 * @s: add of the string.
 * Return: count the int length of the string.
 */
int strl(const char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}
	return (count);
}
/**
 * add_node - adds node to the first of the linked lisrs
 * @head: the head of the linked list.
 * @str: the str to be updated.
 * Return: pointer to the new head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strl(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
