#include "lists.h"

/**
* get_dnodeint_at_index- gets nth node of a dlistint_t linked list.
* @head: head of list
* @index: number of node to get
*
* Return: the nth node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
