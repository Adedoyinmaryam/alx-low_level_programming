#include "main.h"
/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index, starting from 0, of the bit to clear.
 *
 * Return: 1 if it worked (success), or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int face = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~face;

	return (1);
}
