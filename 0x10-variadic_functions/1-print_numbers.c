#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
*print_numbers- prints numbers
*@separator: string to be printed between numbers
*@n: numbers to be printed
*Return: Numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(nums, int);

		printf("%d", arg);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}
