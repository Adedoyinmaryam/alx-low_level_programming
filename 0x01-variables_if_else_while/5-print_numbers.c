#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
			a = a + 1;
	}
	putchar('\n');
	return (0);
}
