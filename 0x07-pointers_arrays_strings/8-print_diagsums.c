#include<stdio.h>
#include"main.h"
/**
* print_diagsums- function to print two diagonal
*	of a square matrix of integers.d
* @a: sqaure matrix pointer
* @size: size of the matrixm
* @sum1 and @sum2 : sums of diagonals of the square matrix.
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}

