#include "lists.h"

/**
 *delete_nodeint_at_index-deletes the node at index
 * of a listint_t linked lis
 *@head: the pointer of the header
 *@index: index of the elements of the list
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *use = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	use = temp->next;
	temp->next = use->next;
	free(use);

	return (1);
}

