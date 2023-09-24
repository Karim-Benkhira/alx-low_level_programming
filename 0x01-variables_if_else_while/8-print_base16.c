#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all hexadecimal numbers in lowercase,
 * followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char numbers = '0';
char alpha = 'a';
while (numbers <= '9')
{
putchar(numbers);
numbers++;
}
while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
