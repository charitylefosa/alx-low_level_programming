#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
*malloc_checked- allocates memory using malloc
*@a: pointer to be returned
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
