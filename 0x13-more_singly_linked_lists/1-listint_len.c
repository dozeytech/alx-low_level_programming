#include "lists.h"

/**
 * listint_len - returns the No of elements
 * @h: The head of the lnked list
 * Return: the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;
	while (h)
	{
		j++;
		h = h->next;
	}

	return (j);
}
