#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *dod_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		dod_node = node->next;
		free(node->str);
		free(node);
		node = dod_node;
	}
}
