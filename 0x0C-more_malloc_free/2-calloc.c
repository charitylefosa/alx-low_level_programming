#include<stdlib.h>
#include"main.h"
#include<string.h>
/**
*_calloc-  allocates memory for an array, using malloc
*@nmemb: number of array elements
*@size: bytes of each element
*Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *c;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	c = p;
	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';
	return (p);
}
