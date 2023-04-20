#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
*print_opcodes- prints opcodes
*@s: pointer to opcodes
*@size: size of opcodes
*
*/
void print_opcodes(unsigned char *s, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%02x", s[i]);
	}
	printf("\n");
}
/**
*main- entry point
*@argc: argument count
*@argv: argument vector
*Return: Always 0
*/
int main(int argc, char *argv[])
{
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	size =  atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *s;

	s = (unsigned char *)main;
	return (0);
}
