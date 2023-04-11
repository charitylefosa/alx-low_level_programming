#include<stdlib.h>
#include"main.h"
/**
*argstostr- concatenates all the arguments of the program
*@ac: number of arguments passed to the program
*@av: array of pointers to the arguments
*Return: NULL
*	pointer to a new string
*/
char *argstostr(int ac, char **av)
{
	char *s;
	int arg, byte;
	int i = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			len++;
		}
	}
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			s[i++] = av[arg][byte];
		}
		s[i++] = '\n';
	}
	s[i] = '\0';
	return (s);
}
