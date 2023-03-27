#include"main.h"
/**
* _strlen - the length of a string
* @s: string to get the length of
*
* Return: @str length
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
