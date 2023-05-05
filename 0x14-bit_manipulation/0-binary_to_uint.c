#include<stdio.h>
#include"main.h"
/**
*
*
*
*
*
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
