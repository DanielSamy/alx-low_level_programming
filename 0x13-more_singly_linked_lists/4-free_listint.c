#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *dod;

	while (head)
	{
		dod = head;
		head = head->next;
		free(dod);
	}
}

