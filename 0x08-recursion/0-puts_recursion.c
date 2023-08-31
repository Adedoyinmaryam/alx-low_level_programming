#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: Pointer to the input string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Hello Recursion";

	_puts_recursion(str);
	return (0);
}



