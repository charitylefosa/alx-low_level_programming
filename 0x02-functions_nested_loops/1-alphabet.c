#include<stdio.h>
#include<alphabet.h>
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
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}
