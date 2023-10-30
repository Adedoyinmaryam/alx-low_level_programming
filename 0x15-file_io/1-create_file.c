#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fdesc;
	int numlet = 0;
	int readwr;

	if (filename == NULL)
		return (-1);

	fdesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	readwr = write(fdesc, text_content, numlet);

	if (fdesc == -1 || readwr == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (numlet = 0; text_content[numlet];)
			numlet++;
	}
	close(fdesc);

	return (1);
}
