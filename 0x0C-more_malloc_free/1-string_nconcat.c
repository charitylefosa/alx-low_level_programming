#include<stdlib.h>
#include"main.h"
#include<string.h>
#include<stddef.h>
/**
*string_nconcat- concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: number of bytes
*Return: pointer to the string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, len1, len2 = 0, len_p;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	while (len2 < n && s2[len2] != '\0')
	{
		len2++;
	}
	len_p = len1 + len2;

	p = malloc((len_p + 1)  * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		p[i + j] = s2[j];
	}
	p[len_p] = '\0';
	return (p);
}
