#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at some idx.
 * @head: the head of the node.
 * @index: the index of the node to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

while (i != index)
{
current = current->next;
if (current == NULL)
{
return (-1);
}
i++;
}

if (index != 0)
{
current->prev->next = current->next;
current->next->prev = current->prev;
}
else
{
current->next->prev = NULL;
current = current->next;
*head = current;
}
return (1);
}
