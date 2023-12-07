#include "lists.h"

/**
 *add_dnodeint- add a new node at the begining of list
 *@head: pointer to the head
 *@n: data of the new node
 *Return: Address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return NULL;
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		(*head)->prev = newNode;
		newNode->next = *head;
		*head = newNode;
	}

	return (*head);
}
