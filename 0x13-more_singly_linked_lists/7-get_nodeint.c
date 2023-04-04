#include "lists.h"

/**
  * get_nodeint_at_index - function that returns the nth node
  * @head: head of the node
  * @index: index of the node
  *
  * Return: if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	if (head)
	{
		while (head)
		{
			if (j == index)
				return (head);

			head = head->next;
			j++;
		}
	}

	return (NULL);
}

