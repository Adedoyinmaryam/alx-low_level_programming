#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper - Helper function to check if a string is palindrome recursively.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Checks if a string is palindrome.
 * @s: The input string.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, len - 1));
}
