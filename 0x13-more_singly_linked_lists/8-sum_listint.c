#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 *
 * @head: pointer to the first node of the list
 * Return: the sum of all
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/* add n to sum*/
		sum += head->n;
		/*go to the next node*/
		head = head->next;
	}

	return (sum);
}
