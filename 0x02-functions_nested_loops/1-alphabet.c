#include"main.h"
/**
 * print_alphabet - prints lowercase alphabet followed by new line.
 *
 * return: 0
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
