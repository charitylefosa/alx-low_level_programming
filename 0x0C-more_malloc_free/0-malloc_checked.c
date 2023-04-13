#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
*malloc_checked- allocates memory using malloc
*@b: integer to be allocated memery for
*Return: @a
*	98 if NULL
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
