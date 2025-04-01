#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: A pointer to a pointer to the head of the linked list
 * @str: The string to be added to the new node
 *
 * Return: A pointer to the newly created node
 *
 * Description:
 * This function adds a new node containing the specified string 'str'
 * at the beginning of the linked list pointed to by 'head'. If memory
 * allocation fails, it returns NULL. Otherwise, it returns a pointer
 * to the newly created node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dernier_noeud;
	list_t *current = *head;
	int count = 0, i;
	char *duplique;

	dernier_noeud = malloc(sizeof(list_t));
	if (dernier_noeud == NULL)
	{
		return (NULL);
	}
	duplique = strdup(str);
	if (duplique == NULL)
	{
		free(dernier_noeud);
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		count++;
	}
	dernier_noeud->str = duplique;
	dernier_noeud->len = count;
	dernier_noeud->next = NULL;
	if (*head == NULL)
	{
		*head = dernier_noeud;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = dernier_noeud;
	}
	return (dernier_noeud);
}
