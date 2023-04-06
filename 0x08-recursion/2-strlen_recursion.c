#include"main.h"
#include<stdio.h>
/**
*_strlen_recursion - checks the length if a string
*@s: string to be checked
*Returns: length of the string
*/

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
		putchar('\n');

	else
	{
		l++;
		return (l + _strlen_recursion(l + 1));
	}
}
