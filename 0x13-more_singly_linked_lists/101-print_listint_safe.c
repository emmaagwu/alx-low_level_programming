#include "lists.h"

/**
 *loop_list - checks the unique node in looped list
 *@head: pointer to the list
 *Return: the number of nodes
 */

size_t loop_list(const listint_t *head)
{
	const listint_t *one, *two;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	one = head->next;
	two = (head->next)->next;

	while (two)
	{
		if (one == two)
		{
			one = head;
			while (one != two)
			{
				nodes++;
				one = one->next;
				two = two->next;
			}

			one = one->next;

			while (one != two)
			{
				nodes++;
				one = one->next;
			}

			return (nodes);
		}

		one = one->next;
		two = (two->next)->next;
	}
return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_list(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
