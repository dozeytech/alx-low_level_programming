#include "lists.h"

/**
 * free_listint2 - function that free a list
 * @head: head of the list
 * Return: nothing
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}

	}
	else
	{
		return;
	}

	free(*head);

	head = 0;
}


