#include "lists.h"

/**
 *list_len - returns the number of elements
 *@h: the head pointer
 *
 *Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned long int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

