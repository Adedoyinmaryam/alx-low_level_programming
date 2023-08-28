#include "main.h"
/*
 * _memset - fills memory with constat byte
 *
 *
 *
 * Return: memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
