#include<stdio.h>
#include<string.h>
#include"main.h"
/**
* _strcat - Concatenates the string pointed to by @src, including
*	the terminating null byte, to the end of the string pointed to by @dest.
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
*
* Return: A pointer to the destination string @dest.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = src[j];
		while (src[j] != '\0')
		{
			i++;
			j++;
		}	
	dest[i] = src[j];
	}
	putchar('\n');
	return (dest);
}
