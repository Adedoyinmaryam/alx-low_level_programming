#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char a;

	a = 'a';
	a = 'A';
	while (a <= 'z', a++)
	{
		putchar(a);
	}
	while (a <= 'Z', a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
