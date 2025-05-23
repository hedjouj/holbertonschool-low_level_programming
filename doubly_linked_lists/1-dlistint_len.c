#include "lists.h"
/**
 * dlistint_len - afficher la lenght de la liste
 * @h: A pointer to the head of the doubly linked list.
 *
 * Description: This function prints all the elements of a doubly linked list
 * starting from the given head node 'h'. It traverses the list and prints
 * the integer value stored in each node. It returns the total number of nodes
 * in the list.
 *
 * Return: The number of nodes in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
