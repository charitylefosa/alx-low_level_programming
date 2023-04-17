#include<stdio.h>
#include"dog.h"
#include<string.h>
#include<stdlib.h>
/**
*new_dog- creates a new dog
*@name: new dog name
*@age: new dog age
*@owner: new dog owner
*Return: new_dog
*	NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	else
	{
		n_dog->name = strdup(name);
		n_dog->age = age;
		n_dog->owner = strdup(owner);
		return (n_dog);
	}
	free(n_dog);
}
