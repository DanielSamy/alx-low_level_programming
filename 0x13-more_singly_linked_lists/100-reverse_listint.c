#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *dod = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	dod = *head;
	*head = NULL;
	while (dod)
	{
		next = dod->next;
		dod->next = *head;
		*head = dod;
		dod = next;
	}

	return (*head);
}

