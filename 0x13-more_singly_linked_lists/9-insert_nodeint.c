#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *
 * @head: A pointer to the address
 * @idx: The index of the listint_t list
 * @n: The integer for the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *copy_n = *head_n;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = copy_n;
		*head_n = new_n;
		return (new_n);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy_n == NULL || copy_n->next == NULL)
			return (NULL);

		copy_n = copy_n->next;
	}

	new_n->next = copy_n->next;
	copy_n->next = new_n;

	return (new_n);
}
