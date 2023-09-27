#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the linked list
 *
 * Return: pointer to the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *forw = NULL;

	while (*head)
	{
		forw = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forw;
	}

	*head = back;

	return (*head);
}

