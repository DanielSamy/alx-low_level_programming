#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 *
 * Return: address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *star, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (star = head; star != end; star = star->next)
			if (star == end->next)
				return (end->next);
	}
	return (NULL);
}

