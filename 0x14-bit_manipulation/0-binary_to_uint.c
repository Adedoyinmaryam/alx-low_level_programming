#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: string
 * Return: Converted number
 *         0 if there is one or more chars in the string
 *         or b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		n = (n << 1) | (*b - '0');
		b++;
	}
	return (n);
}
