#include"main.h"
#include<stdio.h>
/**
*_strlen_recursion - checks the length if a string
*@s: string to be checked
*Return: length of the string
*/

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
