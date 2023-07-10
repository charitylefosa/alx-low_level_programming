#include "main.h"
#include <stdlib.h>
/**
*read_textfile- reads text file and prints it to the POSIX standard output
*@filename: pointer to the file to be read
*@letters: letters to be counted
*Return: actual number of letters it could read and print
*	if filename is NULL return 0
*	if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t readd, fn, count;

	if (filename == NULL)
	{
		return (0);
	}
	fn = open(filename, O_RDONLY);
	if (fn == -1)
	{
		return (0);
	}
	ptr = malloc(sizeof(char) * (letters));
	if (ptr == NULL)
	{
		return (0);
	}
	readd = read(fn, ptr, letters);
	count = write(STDOUT_FILENO, ptr, readd);
	close(fn);
	free(ptr);
	return (count);
}
