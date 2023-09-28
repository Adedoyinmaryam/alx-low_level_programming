#include "0-main.c"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 *
 * Return: converted number, or 0 if invalid character or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			output = (output << 1) | (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (output);
}
