#include "lists.h"

/**
 *free_listint2 -frees a listint_t list
 *@head: pointer to the linked list pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	temp = *head;
	while (*head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;

}
