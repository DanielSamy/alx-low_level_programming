#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: index of new node
 * @n: data to insert
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *dod = *head;

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (d = 0; dod && d < idx; d++)
	{
		if (d == idx - 1)
		{
			new_node->next = dod->next;
			dod->next = new_node;
			return (new_node);
		}
		else
			dod = dod->next;
	}

	return (NULL);
}

