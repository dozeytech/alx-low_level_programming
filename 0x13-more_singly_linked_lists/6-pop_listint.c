#include "lists.h"

/**
  * pop_listint -function that deletes the head node of a listint_t
  * @head: The head of the nodes
  *
  * Return: if the linked list is empty return 0
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head != NULL)
	{
		temp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temp;
	}

	return (n);
}
