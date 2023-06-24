#include "lists.h"
/**
 * sum_dlistint - sum all of the data
 * @head: the head of the dllist.
 * Return: the sum value.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
