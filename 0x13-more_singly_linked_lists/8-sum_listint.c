#include"lists.h"
#include<stdio.h>
/**
*sum_listint- sums all the data of the listint_t linked list
*@head: pointer to the linked list
*
*Return: sum or 0 if list is empty
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
