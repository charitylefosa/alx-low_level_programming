#include<stdio.h>

void printIntro(void)__attribute__((constructor));
/**
*printIntro- prints sentence before the main
*
*/

void printIntro(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
