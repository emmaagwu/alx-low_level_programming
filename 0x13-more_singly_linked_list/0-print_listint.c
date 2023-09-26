#include "lists.h"

/**
 *print_listint - prints all the elements of a listint_t list
 *@h: the linked list head
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t n = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	h = temp;
	return (n);
}
