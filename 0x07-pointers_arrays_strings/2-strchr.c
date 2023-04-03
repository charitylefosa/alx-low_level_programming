#include<stdio.h>
#include"main.h"
#include<string.h>
/*
*_strchr-function returning  a pointer atfirst occurance of char c in str s
*@c: character to be returned at its first occurance in s
*return: @s if character c is found or NULL if @c is not found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] != '\0')
		s[i] = c;
	else
		s[i] = '\0';
	return (s);
}
