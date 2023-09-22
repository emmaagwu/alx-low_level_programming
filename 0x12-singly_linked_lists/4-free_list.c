#include "lists.h"

/**
 *free_list - frees the nodes
 *@head - the head pointer
 *
 */

void free_list(list_t *head)
{
	list_t *Temp;

	while (head != NULL)
	{
		Temp = head;
		head = head->next;
		free(Temp);
	}
}
