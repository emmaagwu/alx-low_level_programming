#include "lists.h"

/**
 *print_list -  prints all the elements of a list_t list
 *@h: the head pointer
 *Return: the number of nodes printed
 */



size_t print_list(const list_t *h)
{
	long unsigned nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (%s)\n", 0, "nil");
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
