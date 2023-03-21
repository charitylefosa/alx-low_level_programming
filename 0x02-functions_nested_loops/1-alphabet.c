#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
}

