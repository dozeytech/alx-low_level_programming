#include "lists.h"

/**
 * print_listint - print all the elements in the list
 * @h: head of the nodes
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; h = h->next, i++)
		printf("%d\n", h->n);

	return (i);
}
