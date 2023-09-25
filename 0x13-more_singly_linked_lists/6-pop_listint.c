#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer of the first node
 *
 * Return: value of node
 */

int pop_listint(listint_t **head)
{
	listint_t *dod;
	int d;

	if (!head || !*head)
		return (0);

	dod = (*head)->next;
	d = (*head)->n;
	free(*head);
	*head = dod;

	return (d);
}

