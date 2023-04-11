#include<string.h>
#include"main.h"
#include<stdlib.h>
/**
*str_concat- concatenates two strings
*@s1:first string
*@s2:second string
*Return: 0
*	NULL for failure
*/
char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc(strlen(s1) + strlen(s2) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
}
