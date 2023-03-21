#include<stdio.h>

void print_alphabet_x10(void);
#include"main.h"

void print_alphabet_x10(void)
{
	char l;
	int i;

	for (i=0; i < 10; i++)
	{for(i = 'a'; l <= 'z'; l++)
		{
			putchar(l);
		}
		putchar('\n');
	}
}
