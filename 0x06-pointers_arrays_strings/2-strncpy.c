#include"main.h"
/**
* _strncpy - Copies at most an inputted number
*	of bytes from string src into dest.
* @dest: buffer storing the string copy.
* @src: source string.
* @n: maximum number of bytes to be copied from src.
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
