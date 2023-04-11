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
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (a);
}
