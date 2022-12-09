#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Do something
 * @filename: input
 * @letters: input
 * Return: result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int fd;
	int size;

	if (filename == NULL)
	{
		return (0);
	}


	text = (char *) malloc((int)letters * sizeof(char));
	if (text == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	size = read(fd, text, letters);
	size = write(1, text, size);
	close(fd);
	return (size / sizeof(char));
}
