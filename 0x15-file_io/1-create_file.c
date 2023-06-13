#include "main.h"
#include <stdlib.h>
/**
 * create_file - function that creates a file
 * @filename: a pointer to the file to be created
 * @text_content: a pointer to the string which is to be written in the file
 *
 * Return: 1 if success and -1 if failure
 */
int create_file(const char *filename, char *text_content)
{int a, c, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(a, text_content, length);

	if (a == -1 || c == -1)
		return (-1);

	close(a);

	return (1);
}
