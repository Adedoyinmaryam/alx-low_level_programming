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
	int opn, wrt, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, lens);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
