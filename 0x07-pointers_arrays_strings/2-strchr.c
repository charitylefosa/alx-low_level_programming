#include"main.h"
#include<string.h>

/*
* _strchr - locate a character in a string
* @s: the string to search
* @c: the character to locate
*
* This function returns a pointer to the first occurrence of the character c
* in the string s, or NULL if the character is not found.
*
* this is function _strchr
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
