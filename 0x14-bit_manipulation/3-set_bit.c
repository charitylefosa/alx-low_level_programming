#include "main.h"
/**
*set_bit- set the value of a bit at givenm index to 1
*@n: a pointer to the bit
*@index: index to set th value at
*
*Return: -1 if error ocures
*	else 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
		return (1);
}
