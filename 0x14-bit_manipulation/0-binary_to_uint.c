#include "main.h"
/**
*binary_to_unit- converts a binary number to an unsigned int
*@b: pointer to string of 0 or 1 characters
*
*Return: -0 if b is NULL or conatains not 0 or 1
*	converted number otherwise
*/
unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (*b == '\0')
		return (0);
	for (len = 0; b[len];)
		len++;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
