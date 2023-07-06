#include "main.h"
/**
*binary_to_uint- converts a binary number to an unsigned int
*@b: pointer to string of 0 or 1 characters
*
*Return: -0 if b is NULL or conatains not 0 or 1
*	converted number otherwise
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;
	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		num <<= 1;
		if (*b == '1')
		{
			num |= 1;
		}
		b++;
	}
	return (num);
}
