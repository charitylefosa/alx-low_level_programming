#include<string.h>
#include"main.h"
/**
* _strncat - Concatenates the string pointed to by @src
*	using n bytes to the end of the string pointed to by @dest.
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
* @n: bytes from src
* Return: A pointer to the destination string @dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; i < n && src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
