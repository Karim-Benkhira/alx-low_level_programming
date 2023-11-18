#include <unistd.h>

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
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
		ft_putchar(argv[i][j]);
		j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
