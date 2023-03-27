#include<stdio.h>
#include"main.h"
/**
* swap_int - swap the values of two integers
* @a: int 1 to be swapped
* @b: int 2 to be swapped
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
