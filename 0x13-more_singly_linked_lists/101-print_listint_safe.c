#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: head of the nodes
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;

		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			exit(98);
		}
	}

	if (!slow || !fast)
		return (count);

	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;

	slow = slow->next;
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
	count++;

	return (count);
}

