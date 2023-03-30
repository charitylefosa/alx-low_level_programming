#include"main.h"
/**
* _strcmp - compares the two strings, s1 and s2
* @s1: first string to be compared
* @s2: second string to be compared
* return: 0 when s1 == s2
*	<0 when s1 < s2
*	>0 when s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] == s2[n])
	{
		return (0);
	}
	n++;

	return (s1 - s2);
}
