#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it out to the POSIX output
 * @filename: pointer to the name of the file
 * @letters: the number of letters the function should read and print
 *
 * Return:0 if file cannot be opened or read
 * or if filename is NULL
 * or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	b = read(a, buffer, letters);
	c = write(STDOUT_FILENO, buffer, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(a);

	return (c);
}
