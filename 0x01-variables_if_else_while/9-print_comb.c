#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible
 * combinations of single-digit numbers.
 * Numbers must be separated by ',', followed by a space.
 * Numbers should be printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;
while (number <= 9)
{
putchar(number + '0');
if (number != 9)
{
putchar(',');
putchar(' ');
}
number++;
}
putchar('\n');
return (0);
}
