#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: head of the node
 *
 * Return: The sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}



