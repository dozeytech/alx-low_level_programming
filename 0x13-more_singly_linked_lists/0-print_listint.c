#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: The No of nodes
 */
size_t print_listint(const listint_t *h)
{
	int j = 0;

	if (h != NULL)
	{
		while (h)
		{

		printf("%d\n", h->n);
		j++;
		h = h->next;
		}

	}

	return (j);
}

