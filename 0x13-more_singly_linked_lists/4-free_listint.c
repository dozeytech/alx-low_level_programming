#include "lists.h"

/**
 * free_listint - frees a link list
 * @head: head of the link
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
