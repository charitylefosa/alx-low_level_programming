#include"main.h"
#include<stdio.h>

/**
* main - storing a variable address into a pointer
*
* Return: Always(0)
*/

int main(void)
{
	int n;

	n = 100;

	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
