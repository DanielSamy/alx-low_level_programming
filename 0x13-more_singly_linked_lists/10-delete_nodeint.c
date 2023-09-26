#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: 1 Success, -1 Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dod = *head;
	listint_t *mar = NULL;
	unsigned int d = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dod);
		return (1);
	}

	while (d < index - 1)
	{
		if (!dod || !(dod->next))
			return (-1);
		dod = dod->next;
		d++;
	}


	mar = dod->next;
	dod->next = mar->next;
	free(mar);

	return (1);
}

