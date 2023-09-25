#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer
 *
 * Return: size
 */

size_t print_listint(const listint_t *h)
{
	size_t dod = 0;

	while (h)
	{
		printf("%d\n", h->n);
		dod++;
		h = h->next;
	}

	return (dod);
}

