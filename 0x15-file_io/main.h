#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#ifndef FCNTL_H
#define FCNTL_H
#include <fcntl.h>
#endif

#ifndef READ_TEXTFILE_H
#define READ_TEXTFILE_H
/**
 * read_textfile - Do something
 * @filename: input
 * @letters: input
 * Return: result
 */
ssize_t read_textfile(const char *filename, size_t letters);
#endif

#ifndef CREATE_FILE_H
#define CREATE_FILE_H
/**
 * create_file - Do something
 * @filename: input
 * @text_content: input
 * Return: result
 */
int create_file(const char *filename, char *text_content);
#endif

#ifndef APPEND_TEXT_TO_FILE_H
#define APPEND_TEXT_TO_FILE_H
/**
 * append_text_to_file - Do something
 * @filename: input
 * @text_content: input
 * Return: result
 */
int append_text_to_file(const char *filename, char *text_content);
#endif
