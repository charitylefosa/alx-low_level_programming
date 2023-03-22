#include"main.h"
/**
 * _islower - checks for lowercase
 * @l: the character checked
 * Return: 1 for lowcase and 0 for other.
 */
int _islower(int l)
{
	if (l >= 'a' && l <= 'z')
		return (1);
	else
		return (0);
}
