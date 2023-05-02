#include "lists.h"
/**
 * print_listint_safe - prints a list.
 * @head: the head of the list.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp, *current;
	int count = 0;

	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *) current, current->n);
		tmp = current;
		current = current->next;
		if (tmp <= current)
		{
			printf("-> [%p] %d\n", (void *) current, 98);
			exit(98);
		}
		count++;
	}
	return (count);
}
