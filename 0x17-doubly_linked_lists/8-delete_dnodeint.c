#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to delete.
 *
 * Return: (1) if it succeeded, (-1) if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i == index && current != NULL)
	{
		if (current->next != NULL)
			current->next->prev = current->prev;
		current->prev->next = current->next;
		free(current);
		return (1);
	}

	return (-1);
}

