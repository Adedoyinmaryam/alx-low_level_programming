#include <stdarg.h>
#include "main.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int sum;
	unsigned int i;
	sum = 0;
	
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		sum += num;
	}

	va_end(args);
	return (sum);
}
