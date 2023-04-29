#include"lists.h"
#include<stdlib.h>
#include<string.h>
/**
*add_node- adds a new node at the beginning of a list_t list.
*@head: pointer to head of list_t list
*@str: string to be duplicated
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *s;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	if (s == NULL)
	{
		free(n);
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		len++;
	}
	n->str = s;
	n->len = len;
	n->next = *head;
	*head = n;
	return (n);
}
