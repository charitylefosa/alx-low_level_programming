#include"main.h"
/**
* print_rev - prints the string in reverse
* @s: string to be printed
* return: s
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
