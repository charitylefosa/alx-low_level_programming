#include"main.h"
/**
 * print_alphabet)x10 - prints 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	while (i++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
