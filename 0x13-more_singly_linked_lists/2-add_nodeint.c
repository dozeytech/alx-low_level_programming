#include "lists.h"

/**
 * add_nodeint - Add a new nodes at the beginning of a new line
 * @head: head of the node
 * @n: data of the new node
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}

	return (NULL);

}



