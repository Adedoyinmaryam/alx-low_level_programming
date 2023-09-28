#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index, starting from 0, of the bit to set.
 *
 * Return: 1 if it worked (success), or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int face = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= face;

	return (1);
}
