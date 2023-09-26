#include "lists.h"

/**
 *get_nodeint_at_index -returns the nth node of a listint_t linked list
 *@head: the head node pointer
 *@index: the element index
 *Return: NULL or the element corresponding the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	if (index == 0)
		return (head);
	temp = head;

	while (temp && count < index)
	{
		
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);

}
