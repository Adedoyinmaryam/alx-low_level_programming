#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at the specified index (0 or 1).
 *         If an error occurs (e.g., if the index is out of range),
 *         it returns -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int face = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & face) ? 1 : 0);
}
