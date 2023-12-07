#include "lists.h"

/**
 *add_dnodeint_end- add a node at the end of list
 *@head: pointer to the head of list
 *@n: the data of the new node
 *
 *Return: address of the new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new->prev = current;
		current->next = new;
	}
	return (new);
}
