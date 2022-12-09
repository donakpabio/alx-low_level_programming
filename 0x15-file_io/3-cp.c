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
    int res;
    char *buf;
    char *file_to;
    char *file_from;

    if (ac != 3)
    {
        printf("Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = av[1];
    file_to = av[2];

    if (file_from == NULL)
    {
	    printf("Error: Can't read from file $s\n", file_from);
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
	    printf("Error: Can't write to %s\n", file_to);
	    return (99);
    }
    
    if (close(fd1) == -1)
    {
	    printf("Error: Can't close fd %FD_VALUE\n", fd1);
	    return (100);
    }

    if (close(fd2) == -1)
    {
	    prinf("Error: Can't close fd %FD_VALUE\n", fd2);
    }
    buf = malloc(1024 * sizeof(char));
    if (buf == NULL)
    {
	    exit(98);
    }

    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
