#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - prints a list
 * @filename: is a parameter
 * @text_content: is a parameter
 * Return: Nothing.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = strlen(text_content);
	char buf[1024 * 8];

	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600 | 0600);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}


