#include "lists.h"

/**
 *print_dlistint - prints all the elements of double list
 *@h: pointer to the list
 *
 *Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node++;
	}
	return (node);
}
