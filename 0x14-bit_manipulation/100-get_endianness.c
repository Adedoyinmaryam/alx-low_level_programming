#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int result = 1;
	unsigned char *byte = (unsigned char *)&result;

	return ((byte[0] == 1) ? 1 : 0);
}
