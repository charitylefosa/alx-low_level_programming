#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint- frees dlistint_t list
* @head: head of list
*
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
