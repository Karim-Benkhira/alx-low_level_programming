#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 */
void print_alphabet(void)
{
	char	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar (alpha);
		alpha++;
	}
	_putchar ('\n');
}
