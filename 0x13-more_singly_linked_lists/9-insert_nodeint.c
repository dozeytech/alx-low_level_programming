#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a given position.
 * @head: head of the nodes
 * @idx: index of the new node
 * @n: The data to insert the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int j = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			temp = *head;
			while (temp)
			{
				if (j == idx)
				{
					new->next = temp->next;
					temp->next = new;
					return (new);
				}
				temp = temp->next;
				j++;
			}
			if (idx > j)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}

