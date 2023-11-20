#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

	if (head != NULL)
	{
		/*set head to current*/
		curr = *head;

		/*iterate through the whole list*/
		while ((temp = curr) != NULL)
		{
			/*set next node to current*/
			curr = curr->next;
			free(temp);
		}

		*head = NULL;
	}
}
