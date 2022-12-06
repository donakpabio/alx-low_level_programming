#include <string.h>
#include "main.h"

/**
 * create_file - Do something
 * @filename: input
 * @text_content: input
 * Return: result
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int size;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_EXCL | O_TRUNC);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	size = write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
