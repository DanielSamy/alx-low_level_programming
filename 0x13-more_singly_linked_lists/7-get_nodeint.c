#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer of first node
 * @index: index of the node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *dod;
	unsigned int i;

	for (dod = head, i = 0; node && i < index; dod = dod->next, i++)
		;

	return (dod);
}

