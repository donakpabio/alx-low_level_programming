#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    	char *file_to;
    	char *file_from;
	int i, fd1, fd2, sum, total;

	sum = 1024/sizeof(char);
	total = 0;
	i = 0;

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	if (file_from == NULL)
	{
		printf("Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd1 = open(file_from, O_RDONLY);

	if (fd1 == -1)
	{
		printf("Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_TRUNC);
	if (fd2 == -1)
	{
		fd2 = open(file_to, O_CREAT, 664);
		if (fd2 == -1)
		{
			printf("Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}	

	total = lseek(fd1, 0, SEEK_END);

	while (i <= (total/sum))
	{
		int sz;
		char *b;

		sz = ((i * sum) + sum) < total ? sum : total - (i * sum);
		b = malloc(sz * sizeof(char));
		printf("Size is %d\n", sz);	
		read(fd1, b, sz);
		printf("Data is %s with size %lu\n", b, sizeof(b));
		write(fd2, b, sz);
		free(b);
		i++;
	}
	
	if (close(fd1) == -1)
	{
		printf("Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		printf("Error: Can't close fd %d", fd2);
		exit(100);
	}
}
