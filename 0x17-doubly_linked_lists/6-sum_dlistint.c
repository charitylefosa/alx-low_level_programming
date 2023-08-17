#include "lists.h"

/**
* sum_dlistint- gets sum of all the data (n) of dlistint_t linked list.
* @head: head of list
*
* Return: sum or 0 if empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
