#include<stdio.h>
#include<stddef.h>
#include<string.h>
#include"main.h"
/**
*_memset-fills the first bytes of memory pointed with a constant byte
*@n: first to be filled
*@b: constant bytes to be added
*@s: momery area pointed to
*Return: the memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

