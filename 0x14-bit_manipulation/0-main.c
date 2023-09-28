#include <stdio.h>

/* Prototype for the binary_to_uint function */
unsigned int binary_to_uint(const char *b);

int main(void)
{
	const char *binary = "01110111";
	unsigned int output = binary_to_uint(binary);

	printf("The binary is : %s, Decimal: %u\n", binary, output);
	return (0);
}
