#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: linked of the list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	listint_t *last;

	if (head == NULL)
		return (NULL);
	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (ptr = head; ptr != last; ptr = ptr->next)
			if (ptr == last->next)
				return (last->next);
	}

	return (NULL);
}
