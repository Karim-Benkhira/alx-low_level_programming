#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * ft_putchar - writes a character to stdout
 * @c: The character to write.
 *
 * Description: This function writes a single character to the standard output.
 *
 * Return: On success, the character written. On error, EOF.
 */
void ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int	num1, num2, result;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
