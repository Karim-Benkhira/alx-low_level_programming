#include "main.h"
void print_alphabet(void);

/**
 * print_alphabet_x10 - Print the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}

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
