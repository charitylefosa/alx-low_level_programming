#include"lists.h"
/**
*reverse_listint- reverses a linked list.
*@head: pointer to linked list
*
*Return: pointer to first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptrr;

	ptr = NULL;
	ptrr = NULL;
	while (*head != NULL)
	{
		ptrr = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ptrr;
	}
	*head = ptr;
	return (*head);
}
