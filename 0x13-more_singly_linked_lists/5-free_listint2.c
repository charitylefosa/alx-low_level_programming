#include"lists.h"
#include <stdlib.h>
/**
*free_listint2- frees linked list
*@head: pointer to a pointer of the list
*
*Return:
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptrr;

	if (head != NULL)
	{
		ptrr = *head;
		while ((ptr = ptrr) != NULL)
		{
			ptrr = ptrr->next;
			free(ptr);
		}
		*head = NULL;
	}
}
