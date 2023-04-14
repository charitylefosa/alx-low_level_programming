#include<stdlib.h>
#include"main.h"
#include<string.h>
/**
*_realloc- reallocates a memory block using malloc and free
*@old_size: the size, in bytes, of the allocated space for ptr
*@new_size: the new size, in bytes of the new memory block
*@ptr: pointer to the memory previously allocated
*Return: pointer
*	NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *x;
	char *p_p;
	char *p_i;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		return (x);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p_p = ptr;
	x = malloc(sizeof(*p_p) * new_size);
	if (x == NULL)
	{
		free(ptr);
		return (NULL);
	}
	p_i = x;
	for (i = 0; i < old_size && i < new_size; i++)
		p_i[i] = *p_p++;
	free(ptr);
	return (x);
}
