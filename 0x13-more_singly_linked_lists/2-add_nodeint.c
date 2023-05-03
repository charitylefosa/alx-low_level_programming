#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint- add new nodes at beginning
*@head: pointer to the head of the list
*@n: n elements
*Return: address to new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
