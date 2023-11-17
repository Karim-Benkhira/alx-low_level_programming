#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int	i;
	char *alpha = "_putchar";

	i = 0;
	while (alpha[i])
	{
		_putchar (alpha[i]);
		i++;
	}
	return (0);
}
