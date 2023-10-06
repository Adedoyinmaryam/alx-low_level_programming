#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: filename(starting pointer)
 * @letters: number of letters printed
 * Return:  number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t fd, nit;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	fd = read(file, buffer, letters);
	nit = write(STDOUT_FILENO, buffer, fd);

	close(file);
	free(buffer);

	return (nit);
}
