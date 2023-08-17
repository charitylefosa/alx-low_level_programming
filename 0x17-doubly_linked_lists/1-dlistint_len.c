#include "lists.h"
#include <stddef.h>

/**
* dlistint_len-returns number of elements in linked dlistint_t list.
* @h: head of list
*
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
