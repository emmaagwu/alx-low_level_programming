#include "lists.h"

/**
 *free_dlistint - frees a double linked list
 *@head: the pointer to list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		head = current->next;
		free(current);
		current = head;
	}
}
