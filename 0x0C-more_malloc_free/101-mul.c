#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * str_to_int - Converts a string of digits to an integer.
 * @str: The input string.
 *
 * Return: The integer value of the input string.
 */
int str_to_int(char *str)
{
	int result = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_digit(str[i]))
		{
			printf("Error\n");
			exit(98);
		}
		result = result * 10 + str[i] - '0';
	}
	return (result);
}
/**
 * multiply - Multiplies two numbers and prints the result.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(char *num1, char *num2)
{
	int n1 = str_to_int(num1);
	int n2 = str_to_int(num2);
	int result = n1 * n2;

	printf("%d\n", result);
}
