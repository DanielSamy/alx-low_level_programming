#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t element = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count no of elements*/
		if (h->n != '\0')
			element++;

		/*go to next node*/
		h = h->next;
	}

	return (element);
}
