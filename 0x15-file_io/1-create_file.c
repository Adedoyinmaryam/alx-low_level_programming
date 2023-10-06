#include "main.h"
/**
 * create_file - Create and write into a file
 * and copies content into it
 * @filename: thhe filename to be created
 * @text_content: the content to be copied into the file
 * Return: 1 if successful and -1 if failed.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int nletters;
	int rdr;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		for (rdr = 0; text_content[rdr++];)
			rdr++;
	}
	rdr = write(file, text_content, rdr);
	if (file == -1 || nletters == -1)
		return (-1);
	close(file);

	return (1);
}
