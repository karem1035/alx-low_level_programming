/**
 * free_list - frees a linked list memory
 * @head: head of the first list item.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
