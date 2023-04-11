#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
*main - entry point
*@argv: argument vector
*@argc: argument count
*Return: 0
*	1 for Error
*/
int main(int argc, char *argv[])
{
	int i, j, a, sum = 0;

	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(arg);
		if (a <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
