#include<stdio.h>
#include"main.h"
#include<string.h>
/*
*strchr-locates a character in a string
*@c: character to be searched for
*@s: string to searched
*return : first c occurance if c is found inthe string
*	NULL if @c is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = c;
		return (s);
	}
	return (NULL);
}
