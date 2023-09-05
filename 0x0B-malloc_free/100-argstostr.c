#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all program arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         Returns NULL if ac is 0, av is NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	int total_length = 0;
	int i, j;
	char *result;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}
	result = malloc(total_length * sizeof(char) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(result + j, av[i]);
			j += strlen(av[i]);
			result[j] = '\n';
			j++;
		}
	}
	result[j] = '\0';
	return (result);
}
