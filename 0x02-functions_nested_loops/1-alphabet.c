#include<stdio.h>
#include<main.h>
/**
 * main - entry point
 *
 * return: 0
 */
void print_alphabet(void);

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	return (0);
}

