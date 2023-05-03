#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_listint- prints all the elements of a listint_t list
*@h: pointer to the listint_t list 
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("NULL\n");
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
