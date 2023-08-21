#include "main.h"
/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */
#include "2-strlen.c"
void puts2(char *str)
{
	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
