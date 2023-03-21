#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
void print_alphabet(void);

/**
 * print_alphabet - prints lowercase alphabet followed by new line.
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
