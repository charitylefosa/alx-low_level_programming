#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
*error - handle errors
*@file_f: file from
*@file_to: file to
*@argv: argument array
*/

void error(int file_f, int file_to, char *argv[])
{
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
}

/**
*main - entry point
*@argc: argument count
*@argv: argument array
*Return: Always 0 on success
*/

int main(int argc, char *argv[])
{
	int file_f, err_c, file_to;
	ssize_t readd, nwr;
	char ptr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_f file_to");
		exit(97);
	}
	file_f = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(file_f, file_to, argv);

	readd = 1024;
	while (readd == 1024)
	{
		readd = read(file_f, ptr, 1024);
		if (readd == -1)
			error(-1, 0, argv);
		nwr = write(file_to, ptr, readd);
		if (nwr == -1)
			error(0, -1, argv);
	}
	err_c = close(file_f);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_f);
		exit(100);
	}
	err_c = close(file_to);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_f);
		exit(100);
	}
	return (0);
}
