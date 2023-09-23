#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints all
 *lowercase and uppercase
 * letters of the English alphabet followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char alpha_upper = 'A';
char alpha_lower = 'a';
while (alpha_lower <= 'z')
{
putchar(alpha_lower);
alpha_lower++;
}
while (alpha_upper <= 'Z')
{
putchar(alpha_upper);
alpha_upper++;
}
putchar('\n');
return (0);
}

