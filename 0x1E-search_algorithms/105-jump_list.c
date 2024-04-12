#include "search_algos.h"
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *cur, *jump;
	int step, i;

	if (!list || size == 0)
		return (-1);

	cur = jump = list;

	step = sqrt(size);

	while (jump->n)
	{
		for (i = 0; i < step; i++)
			jump = jump->next;
		
	}
}
