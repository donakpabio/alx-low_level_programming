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

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = creat(filename, 0600);
	}

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}
	close(fd);
	return (1);
}
