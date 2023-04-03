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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = c;
		return (s + i);
	}
	return ('\0');
}
