#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	char a;
	int b;

	for (b = '0'; b < 10; b++)
	{
		putchar((b % 10) + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}


