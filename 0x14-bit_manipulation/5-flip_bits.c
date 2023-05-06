#include"main.h"
/**
*flip_bits-  returns the number of bits you would
*	need to flip to get from one number to another
*@n: unsigned long int number
*@m: unsigned long int number
*Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	while (n || m)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
