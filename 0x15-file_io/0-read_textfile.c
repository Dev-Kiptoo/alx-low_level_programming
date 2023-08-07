#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * read_textfile - a function  that prints in the POSIX stdout
 * @filename: file to be opened
 * @letters: the file that returns the actual number of the letters in the function
 * Return: w
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
