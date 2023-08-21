#include"main.h"
/**
*_strpbrk - loates a character in a string
*@s: the string to search
*@accept: the bytes to find
*Return: first c occurance if c is found in string
*	NULL if c is not found
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (*s == *accept)
		{
			return (s);
			accept++;
		}
		s++;
	}
	return ('\0');
}
