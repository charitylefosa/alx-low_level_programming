#include "main.h"
#include <stdio.h>
/**
*get_bit- gets the value of a bit at a given index.
*@n: the bit
*@index: index to get the value at - indices start at 0.
*
*Return: if an error occurs -1
*	otherwise - value of bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return (((n >> index) & 1) ? 1 : 0);
}
