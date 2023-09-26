#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 *
 * Return: number of node
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int sub;
	listint_t *dod;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			dod = (*h)->next;
			free(*h);
			*h = dod;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}

