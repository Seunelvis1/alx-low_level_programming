#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It will read a text file and print content to STDOUT.
 * @filename: is the name of the text file being read
 * @leisters: is the maximum number of letters to be read
 * Return: w- The actual number of bytes read and printed
 *        0 if the function fails or filname is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
