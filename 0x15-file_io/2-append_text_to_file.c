#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Do something
 * @filename: input
 * @text_content: input
 * Return: result
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		printf("Issue is here");
		return (-1);
	}

	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) <= 0)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
