#include <stdio.h>

/**
 * main - Prints all possible different combinations
 * of  three digits to the console.
 *
 * Description: The output is formatted as follows:
 *   012, 013, 014, ..., 789, 789
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number_0 = 0;
int number_1;
int number_2;
while (number_0 < 8)
{
number_1 = number_0 + 1;
while (number_1 < 9)
{
number_2 = number_1 + 1;
while (number_2 < 10)
{
putchar('0' + number_0);
putchar('0' + number_1);
putchar('0' + number_2);
if (number_0 != 7 || number_1 != 8 || number_2 != 9)
{
putchar(',');
putchar(' ');
}
number_2++;
}
number_1++;
}
number_0++;
}
putchar('\n');
return (0);
}
