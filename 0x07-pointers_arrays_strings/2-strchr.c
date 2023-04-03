#include"main.h"
/**
*_strchr - loates a character in a string
*@s: the string to search
*@c: the character to find
*Return: first c occurance if c is found in string
*	NULL if c is not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
