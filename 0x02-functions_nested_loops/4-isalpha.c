#include "main.h"

/**
 * _isalpha - Check if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
