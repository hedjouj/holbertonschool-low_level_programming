#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data of a linked list
 * @head: a pointer
 *
 *Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
