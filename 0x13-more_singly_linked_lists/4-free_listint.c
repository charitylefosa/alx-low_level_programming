#include"lists.h"
#include<stdlib.h>
/**
*free_listint- frees a listint_t list.
*@head: pointer to the list to be freed
*
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
