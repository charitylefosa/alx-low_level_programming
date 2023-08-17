#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: head of list
* @n: int to add
*
* Return: address to new node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *location;

	if (!head || !new_node)
		return (new_node ? free(new_node), NULL : NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		location = *head;
		while (location->next)
		{
			location = location->next;
		}
		location->next = new_node;
		new_node->prev = location;
	}
	return (new_node);
}
