#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * isNumeric - Check if a string is composed of numeric digits.
 *
 * @str: The string to check.
 *
 * Return: True if the string is numeric, false otherwise.
 */
bool isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (false);
		}
		str++;
	}
	return (true);
}

/**
 * multiply - Multiply two integers.
 *
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of the two numbers.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or 98 if there's an error.
 */
int main(int argc, char *argv[])
{
	/* Check if the correct number of arguments (two) is provided */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Check if both arguments are composed of digits */
	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	/* Convert the arguments from strings to integers */
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	/* Perform the multiplication */
	int result = multiply(num1, num2);

	/* Print the result followed by a newline character */
	printf("%d\n", result);

	return (0);
}
