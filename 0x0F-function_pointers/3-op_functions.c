#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>
/**
*op_add - add two integers
*@a: integer 1
*@b: integer 2
* Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - subtraction between two integers
*@a: integer 1
*@b: integer 2
* Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul- multiplication of two integers
*@a: integer 1
*@b: integer 2
* Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div- devision between two integers
*@a: integer 1
*@b: integer 2
* Return: result of division of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod- reminder after deviding two integers
*@a: integer 1
*@b: integer 2
* Return: remainder of the division of a and b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
