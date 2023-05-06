#include"main.h"
/**
*clear_bit- sets the value of a bit to 0 at a given index
*@n: unsigned long int
*@index: index of the bit
*Return: 1 if it worked
*	-1 if an error occurred
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
