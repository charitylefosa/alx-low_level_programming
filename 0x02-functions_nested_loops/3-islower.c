#include"main.h"
/**
 * _islower - checks for lowercase
 * @c: the character checked
 * Return: 1 for lowcase and 0 for other.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	else
		return (0);
}
