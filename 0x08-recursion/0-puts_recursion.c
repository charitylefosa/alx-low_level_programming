#include"main.h"
#include<stdio.h>
/**
*_puts_recursion - prints a string, followed by a new line
*@s - string to be printed
*Return: string @s
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s);
	s = s + 1;
}
