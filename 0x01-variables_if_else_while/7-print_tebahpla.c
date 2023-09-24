#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse
 * order, from 'z' to 'a', followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha_lower = 'z';
while (alpha_lower >= 'a')
{
putchar(alpha_lower);
alpha_lower--;
}
putchar('\n');
return (0);
}
