#include <stdio.h>

/**
 * main - Prints all possible different combinations
 * of two digits to the console.
 *
 * Description: The output is formatted as follows:
 *   01, 02, 03, ..., 98, 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number_1 = 0;
int number_2;
while (number_1 < 10)
{
number_2 = 1;
while (number_2 < 10)
{
putchar('0' + number_1);
putchar('0' + number_2);
putchar(',');
putchar(' ');
number_2++;
}
number_1++;
}
putchar('\n');
return (0);
}
