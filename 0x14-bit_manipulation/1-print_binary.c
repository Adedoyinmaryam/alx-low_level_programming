#include "main.h"
#include <stdio.h>
/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The number to be converted and printed.
 *
 * Description: Prints the binary representation of a number
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
