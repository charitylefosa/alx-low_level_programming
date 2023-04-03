#include"main.h"
#include<string.h>

/**
*_strstr - finds the first occurrence of the substring needle in the string
*	haystack andterminating null bytes (\0) are not compared
*@needle: substring we searching for
*@haystack: string to be searched
*Return: A pointer to the beginning of the located substring
*	NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *needle == *haystack)
		{
			++haystack;
			++needle;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		++haystack;
	}
	return ('\0');
}
