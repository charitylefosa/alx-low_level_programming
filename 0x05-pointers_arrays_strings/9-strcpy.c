#include "main.h"
/**
* _strcpy - Copy string @src, include terminating null byte to a buffer @dest.
* @dest: buffer to copy the string to
* @src: source string to copy
*
* Return: A pointer to the destination string @dest.
*/
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
