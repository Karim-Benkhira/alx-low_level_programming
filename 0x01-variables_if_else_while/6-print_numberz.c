#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints single-digit numbers in base 10
 * starting from 0, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbers = 0;
while (numbers <= 9)
{
putchar(numbers + '0');
numbers++;
}
putchar('\n');
return (0);
}
