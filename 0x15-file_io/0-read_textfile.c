#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: the file can not be opened or read, return 0
 * if filename is NULL return 0
 * write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (filename  == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
	free(buffer);
	return (0);
	}
	free(buffer);
	close(o);

	return (w);
}

