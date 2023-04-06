#include"main.h"
#include<stdio.h>
/**
* is_divisible - Checks if a number is divisible.
* @num: The number to be checked.
* @div: The divisor.
*
* Return: If the number is divisible - 0.
*         If the number is not divisible - 1.
*/
int is_divisible(int num, int div)
{
	if (num == 0)
		return (0);

	if (num < div)
		return (1);

	if (num % div == 0)
		return (0);

	else
		return (is_divisible(num, div + 1));
}
/**
* is_prime_number - Checks if a number is prime.
* @n: The number to be checked.
*
* Return: If the integer is not prime - 0.
*         If the number is prime - 1.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);
	else
		return (is_divisible(n, 2));
}
