#include "main.h"

/**
 * read_textfile - reads the text file to print to the STDOUT
 * @filename:file name to be read
 * @letters: no of letters to be read
 *
 * Return: actual number of letters read and printed
 * if filename is NULL return 0
 * if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, length, i, result;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	read(fd, buffer, letters);
	buffer[letters] = '\0';

	for (i = 0; buffer[i] != '\0'; i++)
		length += 1;

	result = close(fd);
	if (result != 0)
		exit(-1);

	result = write(STDOUT_FILENO, buffer, length);
	if (result != length)
		return (0);

	free(buffer);

	return (length);
}
