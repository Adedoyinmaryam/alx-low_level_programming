#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
bool is_separator(charc)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0')
	{
		if (separators[i] == c)
		{
			return (true);
		}
	}
	return (false);
}
char *cap_string(char *s)
{
	char *ptr = s;
	bool new_word = true;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			new_word = true;
		}
		else if (new_word && islower(*ptr))
		{
			*ptr = toupper(*ptr);
			new_word = false;
		}
		else
		{
			new_word = false;
		}

		ptr++;
	}
	return (s);
}
