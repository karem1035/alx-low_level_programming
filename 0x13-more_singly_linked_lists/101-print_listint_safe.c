#include "lists.h"
/**
 * print_listint_safe - prints a list.
 * @head: the head of the list.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	long int diff;
	size_t  count = 0;

	while (head)
	{
		diff = head - head->next;
		count++;
		printf("[%p] %d\n", (void *) head, head->n);

		if (diff > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *) head->next, head->next->n);
			break;
		}
	}
	return (count);
}
