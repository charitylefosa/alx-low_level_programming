#include<stdlib.h>
#include"main.h"
#include<string.h>
/**
*alloc_grid-  pointer to a 2 dimensional array of integers
*@width: array dimension
*@height: array dimension
*Return: 0
*	NULL
*/
int **alloc_grid(int width, int height)
{
	int **dim, height_i, width_i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	dim = malloc(height * sizeof(int *));
	if (dim == NULL)
	{
		return (NULL);
	}
	for (height_i = 0; height_i < height; height_i++)
	{
		dim[height_i] = malloc(width * sizeof(int));
		if (dim[height_i] == NULL)
		{
			for (; height_i >= 0; height_i--)
			{
				free(dim[height_i]);
			}
			free(dim);
			return (NULL);
		}
	}
	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
		{
			dim[height_i][width_i] = 0;
		}
	}
	return (dim);
}
