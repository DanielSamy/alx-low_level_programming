#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node
 * @str: string
 *
 * Return: NULL if it fails or starting add of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t str_length = 0;

	/*set string length*/
	if (str == NULL)
		str_length = 0;

	/*count length*/
	while (str[str_length] != '\0')
		str_length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_length;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
