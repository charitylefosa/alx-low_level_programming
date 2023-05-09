#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
/**
*append_text_to_file- appends text at the end of a file..
*@filename: file to be created.
*@text_content: contents in or to be inthe file
*Return: 1 on success
*	-1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fn, letters, read;

	if (filename == NULL)
	{
		return (-1);
	}
	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
	{
		return (-1);
	}
	read = 0;
	letters = 0;

	if (text_content != NULL)
	{
		while (text_content[letters] != '\0')
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
