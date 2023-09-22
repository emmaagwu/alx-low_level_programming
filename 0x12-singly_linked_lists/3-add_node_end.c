#include "lists.h"

/**
 *add_node_end - adds a new node to the end
 *@head: the head pointer
 *@str: the string of new node
 *
 *Return: the pointer to the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newEle;
	list_t *Temp;
	unsigned int leng = 0;

	newEle = malloc(sizeof(list_t));

	if (newEle == NULL)
		return (NULL);

	newEle->str = strdup(str);
	newEle->next = NULL;

	while (str[leng] != '\0')
	{
		leng++;
	}
	newEle->len = leng;

	if (*head == NULL)
	{
	*head = newEle;
	return (newEle);
	}
	else
	{
	Temp = *head;
	while (Temp->next != NULL)
	{
		Temp = Temp->next;
	}

	Temp->next = newEle;
	return (newEle);
	}
}
