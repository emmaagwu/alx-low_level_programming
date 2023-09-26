#include "lists.h"

/**
 *add_nodeint_end-adds a new node at the end of a listint_t list.
 *@head: the pointer to the linked list
 *@n: the data in the linked list
 *Return: NULL or the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;

return (new);
}
