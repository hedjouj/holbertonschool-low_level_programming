#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a double linked list
 * @head: A pointer to a pointer to the head of the linked list
 * @n: sontant integers
 *
 * Return: A pointer to the newly created node
 *
 * Description:
 * This function adds a new node containing the specified string 'str'
 * at the beginning of the linked list pointed to by 'head'. If memory
 * allocation fails, it returns NULL. Otherwise, it returns a pointer
 * to the newly created node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *dernier_noeud;
	dlistint_t *current = *head;

	dernier_noeud = malloc(sizeof(dlistint_t));
	if (dernier_noeud == NULL)
	{
		return (NULL);
	}
	dernier_noeud->n = n;
	dernier_noeud->next = NULL;

	if (*head == NULL)
	{
		*head = dernier_noeud;
		dernier_noeud->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = dernier_noeud;
		dernier_noeud->prev = current;
	}
	return (dernier_noeud);
}
