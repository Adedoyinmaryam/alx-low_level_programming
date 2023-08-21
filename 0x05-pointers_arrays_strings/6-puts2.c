#include "main.h"
/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */
#include "2-strlen.c"
void puts2(char *str)
{
	int i;

       	for (i = 0; str[i] != '\0'; i += 2)
	{
	printf("%c\n", str[i]);
    }
}
