#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index- inserts a new node at a given position.
* @h: head of list
* @idx: index
* @n: number to insert
* Return: address of new node or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *location;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!h || !new_node)
		return (new_node ? free(new_node), NULL : NULL);
	location = *h;
	new_node->n = n;

	if (!idx)
	{
		new_node->prev = NULL;
		new_node->next = location ? location : NULL;
		if (location)
			location->prev = new_node;
		return (*h = new_node);
	}
	for (; location; location = location->next, idx--)
	{
		if (idx - 1 == 0)
		{
			new_node->prev = location;
			new_node->next = location->next;
			if (new_node->next)
				new_node->next->prev = new_node;
			location->next = new_node;
			return (new_node);
		}
	}
	return (free(new_node), NULL);
}
