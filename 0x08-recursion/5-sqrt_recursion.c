#include"main.h"
#include<stdio.h>
/**
*_sqrt_recursion - gives the natural square root of a number
*@n: number we are getting the squareroot of
*Return: value of n
*/
int _sqrt_recursion(int n)
{
	if ((n % n) != 0)
		return (-1);

	if ((n % n) == 0)
		n++;
	return (n);
}
