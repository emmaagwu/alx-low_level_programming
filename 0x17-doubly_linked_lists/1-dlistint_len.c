#include "lists.h"

/**
 *dlistint_len - returns the number of element in the list
 *@h: pointer to the list
 *
 *Return: The number of element in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		current = current->next;
		node++;
	}
	printf("%ld\n", node);
	return (node);
}
