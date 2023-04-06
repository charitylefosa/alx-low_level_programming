#include"main.h"
#include<stdio.h>
/**
*_pow_recursion - gives the value of x raised to the power of y
*@x: number to be returned
*@y: power x is to be raised to
* Return: @x
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	x *= _pow_recursion(x, y - 1);
	return (x);
}
