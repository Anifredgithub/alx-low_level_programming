#include "main.h"
#include "stdlib.h"

/**
 * read_textfile -reads a text file and prints it to the POSIX standard output
 * @filename: the text file to be read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 *	or 0 if filename is NULL, or fuction fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
