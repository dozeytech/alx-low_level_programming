#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: Head of the nodes
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 1;
	listint_t *current = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (j == index)
		{
			current = temp->next;
			temp->next = current->next;
			free(current);
			return (1);
		}

		temp = temp->next;
		j++;
	}

	return (-1);
}
