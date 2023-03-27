#include "main.h"
/**
* _puts - prints string to stdout
* @str: string to be printed
* return: str
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
