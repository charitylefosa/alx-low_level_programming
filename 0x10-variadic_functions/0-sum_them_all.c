#include<stdio.h>
#include<stdarg.h>
/**
*sum_them_all- sum of all its parameters
*@n: parameters to be summed up
*
*Return: 0 if n is 0
*	Sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(nums, int);

		sum += arg;
	}
	va_end(nums);
	return (sum);
}
