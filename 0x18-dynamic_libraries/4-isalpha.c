#include"main.h"
/**
 * _isalpha - checks if a character alphabetic.
 * @c: letter lowercase or uppercase.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 *
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
