#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 * Return: the head's node's data
*/

int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	/*get element of first node*/
	first_node = temp->n;

	/*free first node*/
	free(temp);

	/*set head to second node*/
	*head = next;

	/*return element of first node*/
	return (first_node);
}
