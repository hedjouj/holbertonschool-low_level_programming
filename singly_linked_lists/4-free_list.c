#include "lists.h"
/**
 * free_list - free the linker list
 *
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
