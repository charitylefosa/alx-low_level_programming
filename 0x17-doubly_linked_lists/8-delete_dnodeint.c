#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index- deletes node at index of dlistint_t linked list
* @head: head of list
* @index: index of node to delete
*
* Return: 1 on success
*	-1 on Unsuccess
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
