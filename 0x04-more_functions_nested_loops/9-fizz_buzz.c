#include <stdio.h>
#include"main.h"
/**
* main - Prints the numbers 1-100,
* Print Fizz is printed for multiples of 3
* Print Buzz for multiples of five
* Print FizzBuzz for 15
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
