#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list
 *
 * @head: A pointer to the address
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *beh;

	if (head == NULL || *head == NULL)
		return (NULL);

	beh = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = beh;
		beh = *head;
		*head = ahead;
	}

	(*head)->next = beh;

	return (*head);
}
