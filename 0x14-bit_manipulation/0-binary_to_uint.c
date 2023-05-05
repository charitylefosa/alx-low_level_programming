#include<stdio.h>
#include"main.h"
/**
*binary_to_uint- converts a binary number to an unsigned int
*@b: pointer to a string of 0 and 1 chars
*
*Return: the converted number, or 0 if
*	there is one or more chars in the string b that is not 0 or 1
*	b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int p;

	p = 0;
	while (*b)
	{
		p <<= 1;
		if (*b++ == '1')
		{
			p |= 1;
		}
	}
	return (p);
}
