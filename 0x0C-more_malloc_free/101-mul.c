#include<stdio.h>
#include<stdlib.h>
/**
*main- entry point
*@argc:argument count
*@argv:argument vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char command[100];

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("0\n");
		return (0);
	}
	sprintf(command, "echo 'scale=10000; %d * %d' | bc", num1, num2);
	system(command);
	return (0);
}
