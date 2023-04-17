#include<stdio.h>
#include"dog.h"
/**
*print_dog- prints a struct dog
*@d: variable pointer
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == 0)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
