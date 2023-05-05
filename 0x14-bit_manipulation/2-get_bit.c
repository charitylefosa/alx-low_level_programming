#include"main.h"
#include<stdio.h>
/**
*get_bit- the value of a bit at a given index
*@n: unsigned long int input
*@index: index, starting from 0 of the bit you want to get
*Return: value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	return (((n >> index) & 1) ? 1 : 0);
}
