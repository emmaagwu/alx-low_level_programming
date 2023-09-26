#include "lists.h"

/**
 *pop_listint- eletes the head node of a listint_t linked list
 *@head: pointer to the linked list pointer
 *Return: 0 or head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;

	temp = temp->next;
	free(*head);
	*head = temp;

	return (data);
}
