#include "lists.h"
/**
 * sum_listint - sums a list of nodes values.
 * @head: the list head.
 * Return: the sum value.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
