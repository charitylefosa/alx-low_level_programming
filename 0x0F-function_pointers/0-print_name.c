#include<stdio.h>
#include"function_pointers.h"
/**
*name- print string in pointer n
*@n: pointer with the name string
*/
void name(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if ((n[i] >= 'A' && n[i] >= 'Z') || (n[i] >= 'a' && n[i] <= 'z'))
		{
			putchar(n[i++]);
		}
	}
}
/**
*print_name- prints name
*@name: name to be printed
*@f: pointer that prints name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name++);
}
