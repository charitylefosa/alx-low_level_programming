#include<stdio.h>
#include<string.h>
#include"main.h"

char *_strcat(char *dest, char *src)
{
	int i = 0, j =0;

	while (dest[i] != '\0')
	{
		putchar(dest[i]);
		i++;
	}
	while (src[j] != '\0')
	{
		putchar(src[j]);
		i++;
		j++;
		dest[i] = src[j];
	}
	return (dest);
}	
