#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to flip
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_output = n ^ m;
	unsigned int num = 0;

	while (xor_output > 0)
	{
		num += xor_output & 1;
		xor_output >>= 1;
	}
	return (num);
}
