#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
/**
* create_file- creates a file.
*@filename: file to be created.
*@text_content: contents in or to be inthe file
*Return: 1 on success
*	-1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fn, letters, read;

	if (filename == NULL)
	{
		return (-1);
	}
	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fn == -1)
	{
		return (-1);
	}
	read = 0;
	letters = 0;

	if (text_content != NULL)
	{
		while (text_content[letters] != '0')
		{
			letters++;
		}
		read = write(fn, text_content, letters);
		if (read == -1)
		{
			return (-1);
		}
	}
	close(fn);
	return (1);
}
