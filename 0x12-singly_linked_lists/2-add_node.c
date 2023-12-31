#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: pointer to the first node
 * @str: string to add to new node
 *
 * Return: NULL if it fails or starting add of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_length = 0;

	/*set string length*/
	if (str == NULL)
		str_length = 0;

	/*count the length*/
	while (str[str_length] != '\0')
		str_length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = str_length;
	*head = new_node;

	return (*head);
}
