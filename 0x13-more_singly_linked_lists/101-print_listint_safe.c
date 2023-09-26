#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer
 *
 * Return: If the list is not looped - 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *dod, *mar;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	dod = head->next;
	mar = (head->next)->next;

	while (mar)
	{
		if (dod == mar)
		{
			dod = head;
			while (dod != mar)
			{
				nodes++;
				dod = dod->next;
				mar = mar->next;
			}

			dod = dod->next;
			while (dod != mar)
			{
				nodes++;
				dod = dod->next;
			}

			return (nodes);
		}

		dod = dod->next;
		mar = (mar->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer
 *
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

