#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a position
 * @h: a pointer to a pointer to the head of the list
 * @idx: the index of the list where the new node will be added
 * @n: the data to be stored in the new node
 *
 * Return: if the function fail return null
 * or a pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int index = 0;
	dlistint_t *nouveau_noeud, *current;

	if (h == NULL)
	{
		return (NULL);
	}
	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (nouveau_noeud == NULL)
		return (NULL);
	nouveau_noeud->n = n;
	if (*h == NULL || idx == 0)
	{
		nouveau_noeud->prev = NULL;
		nouveau_noeud->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = nouveau_noeud;
		}
		*h = nouveau_noeud;
		return (nouveau_noeud);
	}
	current = *h;
	while (current != NULL && index < idx - 1)
	{
		current = current->next;
		index++;
	}
	if (current == NULL)
	{
		free(nouveau_noeud);
		return (NULL);
	}
	nouveau_noeud->next = current->next;
	nouveau_noeud->prev = current;
	if (current->next != NULL)
		current->next->prev = nouveau_noeud;
	current->next = nouveau_noeud;
	return (nouveau_noeud);
}
