#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to write.
 *
 * Description: This function writes a single character to the standard output.
 *
 * Return: On success, the character written. On error, EOF.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

