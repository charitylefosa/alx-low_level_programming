#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
typedef struct
{
	char *symbol;
	void (*print)(va_list);
} printer_t;
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
* print_char- prints character
*@arg: list of arguments pointing to character to be printed
*/
void print_char(va_list arg)
{
	char l;

	l = va_arg(arg, int);
	printf("%c", l);
}
/**
*print_int- prints integer
*@arg: list of arguments pointing to character to be printed
*/
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}
/**
*print_float- prints float
*@arg: list of arguments pointing to character to be printed
*/
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}
/**
*print_string- prints string
*@arg: list of arguments pointing to character to be printed
*/
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
		printf("%s", str);
}
/**
*print_all- prints any argument separated by comma and followed by new line
*@format: string containing format specifiers for the arguments
*...: argument to b printed
* Return: argument
*/
void print_all(const char * const format, ...)
{
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
