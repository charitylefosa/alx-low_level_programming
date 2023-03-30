#include"main.h"
/**
*_strcmp - compares the two strings, s1 and s2
*@s1: first string to be compared
*@s2: second string to be compared
*Return: If s1 == s2, return (0)
*	If s1 < s2, return (<0)
*	If s1 > s2, return (>0)
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		return (0);
	}
	return (*s1 - *s2);
}
