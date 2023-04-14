#include<stdlib.h>
#include<string.h>
/**
*array_range- an array of integers
*@min: minimum
*@max: maximum
*
*Return: NULL if min > max or when malloc fails
*/
int *array_range(int min, int max)
{
	int i, s;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	s = max - min + 1;
	p = malloc(s * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		p[i] = min++;
	return (p);
}
