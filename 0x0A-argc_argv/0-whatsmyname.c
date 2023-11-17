#include <unistd.h>

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

	if (argc > 0)
	{
	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	}
	write(1, "\n", 1);
	return (0);
}
