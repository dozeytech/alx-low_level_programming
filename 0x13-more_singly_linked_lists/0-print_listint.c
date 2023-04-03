#include "lists.h"

/**
 * print_listint - print all the elements in the list
 * @h: head of the nodes
 * Return: The number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			j++;
		}
	}

	return (j);
}
