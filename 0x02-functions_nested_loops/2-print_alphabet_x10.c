#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char a;

	for (i = 0; i <= 9; i++);
	{
		for (a = 'a'; a <= 'z'; a++);
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
