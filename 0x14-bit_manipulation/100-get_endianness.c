#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int result = 1;
	char *byte = (char *)&result;

	if (*byte == 1)
	{
		return (1);
	}
	return (0);
}
