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
	ssize_t size;

	if (filename == NULL)
	{
		return (0);
	}


	text = calloc(letters, sizeof(char));
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
	printf("%s", text);
	free(text);
	return (size);
}
