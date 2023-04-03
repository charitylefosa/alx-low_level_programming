#include"main.h"
#include<stdio.h>
#include<string.h>
/**
*_strspn-calculates the length (in bytes) of the initial segment of s
*	which consists entirely of bytes in accept.
*@accept: string of characters
*@s: another string of characters
*Return: bytes in @s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int bytes = 0;

	while (*s && strchr(accept, *s))
	{
		s++;
		bytes++;
	}
	return (bytes);
}
