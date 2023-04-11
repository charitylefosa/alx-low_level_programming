#include<stdio.h>
#include<stdlib.h>
/**
*main- entry point
*@argv: argument vector
*@argc: argument count
*Return: 0
*	1 for Error
*/
int main(int argc, char *argv[])
{
	int prod, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	prod = a * b;
	printf("%d\n", prod);
	return (0);
}
