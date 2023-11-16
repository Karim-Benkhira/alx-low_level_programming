#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function prints the characters of the given string
 * recursively until it reaches the null terminator ('\0'), at which point
 * it prints a new line.
 *
 * Return: Nothing.
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
