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
	int opn;
	int wrt;
	int brd;

	if (filename == NULL)
	{
		return (-1);
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, brd);
	if (text_content != NULL)
	{
		for (brd = 0; text_content[brd];)
			brd++;
	}
	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
