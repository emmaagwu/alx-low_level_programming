#include "lists.h"

/**
 *get_dnodeint_at_index - gets a node at index
 *@head: pointer to the list
 *@index: index of the node
 *
 *Return: the node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i == index && current != NULL)
		return (current);
	return (NULL);
}
