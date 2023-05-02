#include<stdio.h>
#include"lists.h"
/**
*listint_len- prints elements in the linked_t list
*@h: pointer to the linked_t list
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		count++;
		h = h->next;
		printf("%d\n", count);
	}
	return (count);
}
