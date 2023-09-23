#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet,
 * excluding the letters 'q' and 'e',
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower_case = 'a';
while (lower_case <= 'z')
{
if (lower_case == 'q' || lower_case == 'e')
{
lower_case++;
continue;
}
putchar(lower_case);
lower_case++;
}
putchar('\n');
return (0);
}
