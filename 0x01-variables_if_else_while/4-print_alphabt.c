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

	while (a = 'a'; a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
		continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

