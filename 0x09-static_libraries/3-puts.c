#include "main.h"
/**
* _puts - prints string to stdout
* @s: string to be printed
* return: str
*/
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
