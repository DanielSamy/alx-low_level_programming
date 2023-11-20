#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained
 *
 * @head: A pointer to the head of the listint_t list
 * Return: If there is no loop - NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *h;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tort = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (tort == h)
		{
			tort = head;

			while (tort != h)
			{
				tort = tort->next;
				h = h->next;
			}

			return (tort);
		}

		tort = tort->next;
		h = (h->next)->next;
	}

	return (NULL);
}
