#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*_memcpy-copies n bytes from momory area @scr to @dest
*@dest: memory area to copy n bytes to
*@src: meomery area to copy n bytes from
*@n: bytes to be copied
*Return: memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = n;
	*dest = src[i];
	return (dest);
}
