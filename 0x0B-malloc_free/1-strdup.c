#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
*_strdup- pointer to a new string which is a duplicate of the string str
*@str: string we need a duplicate of
*Return: NULL if string is NULL
*	pointer to duplicate string
*	NULL if there us insufficient memory available
*/
char *_strdup(char *str)
{
	char *d;

	if (str == NULL)
	{
		return (NULL);

	}
	d = malloc(strlen(str) + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	strcpy(d, str);
	return (d);
}
