#include"lists.h"
#include<stdlib.h>
/**
*pop_listint-  deletes the head node of a listint_t linked list
*@head:pointer to the linked list
*
*Return: head node’s data
*/
int pop_listint(listint_t **head)
{
	int node;
	listint_t *ptr, *ptrr;

	if (*head == NULL)
	{
		return (0);
	}
	ptrr = *head;
	node = ptrr->n;
	ptr = ptrr->next;
	free(ptrr);
	*head = ptr;
	return (node);
}
