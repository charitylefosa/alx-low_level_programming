#include<stdio.h>
#include<stdlib.h>
/**
* create_array- creates an array of characters
* @c: charaters
* @size: size of the characters
* Return: 0
*	NULL if siz is equals to 0
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc((size + 1) * sizeof(char));
	for (i = 0; i < size; i++)
	{
		a[i] = c;
		return (0);
	}
	if (size == 0)
	{
		return ('\0');
	}
	a[size] = '\0';
	return (a);
}
