#include "main.h"

/**
*clear_bit- sets the value of bit to 0 at  given index
*@n: unsigned long int
*@index: index of the bit
*
*Return: 1 if it worked
*	-1 if an error occured 
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
	{
		return (-1);
	}
	i = 1ul << index;
	if (*n & i)
	{
		*n ^= i;
	}
	return (1);
}
