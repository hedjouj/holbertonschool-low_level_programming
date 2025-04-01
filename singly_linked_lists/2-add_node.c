#include "lists.h"
/**
 * add_node - ajoute un noeud au dÃbut
 *@head: the beginning of the list
 *@str: string
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nouveau_noeud;
	int count = 0, i;
	char *duplique;

	nouveau_noeud = malloc(sizeof(list_t));
	if (nouveau_noeud == NULL)
	{
		return (NULL);
	}
	duplique = strdup(str);
	if (duplique == NULL)
	{
		free(nouveau_noeud);
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		count++;
	}
	nouveau_noeud->str = duplique;
	nouveau_noeud->len = count;
	nouveau_noeud->next = *head;
	*head = nouveau_noeud;
	return (nouveau_noeud);
}
