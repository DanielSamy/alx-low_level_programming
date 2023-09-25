#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *dod, *temp;

	if (!head)
		return;
	dod = *head;

	while (dod)
	{
		temp = dod;
		dod = dod->next;
		free(temp);
	}

	*head = NULL;
}

