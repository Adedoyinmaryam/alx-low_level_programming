#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: character value
 */
char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
