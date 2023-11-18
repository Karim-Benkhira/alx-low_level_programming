#include <unistd.h>
#include <stdio.h>

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
 * ft_atoi - Converts a string to an integer
 * @str: The input string to be converted
 *
 * Return: The converted integer
 */
int ft_atoi(char *str)
{
	int	i;
	int	a;
	int	s;

	i = 0;
	s = 1;
	a = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'))
		str++;
	while (str[i] == '+' || str[i] == '-')
	{
	if (str[i] == '-')
		s = s * -1;
	if (str[i] == '+')
		s = s * 1;
	else if (str[i] == '-' && str[i] == '-')
		return (0);
	else if (str[i] == '-' && str[i] == '+')
		return (0);
	else if (str[i] == '+' && str[i] == '+')
		return (0);
	else if (str[i] == '+' && str[i] == '-')
		return (0);
	str++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10) + str[i] - '0';
		str++;
	}
	return (a * s);
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

	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
