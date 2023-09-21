#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer
 * @str: string
 *
 * Return: size of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_h = malloc(sizeof(list_t));
	if (!new_h)
		return (NULL);

	new_h->str = strdup(str);
	new_h->len = length;
	new_h->next = NULL;

	if (*head == NULL)
	{
		*head = new_h;
		return (new_h);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_h;

	return (new_h);
}

