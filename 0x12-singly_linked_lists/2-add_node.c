#include "lists.h"

/**
 *add_node - adds a new node to the begining
 *@head: the pointer to the header pointer
 *@str: the string of the new node
 *
 *Return: the pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int leng = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->next = *head;

	while (str[leng] != '\0')
	{
		leng++;
	}
	newNode->len = leng;
	*head = newNode;


	return (newNode);


}
