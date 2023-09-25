#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer
 *
 * Return: size
 */

size_t listint_len(const listint_t *h)
{
	size_t dod = 0;

	while (h)
	{
		dod++;
		h = h->next;
	}

	return (dod);
}

