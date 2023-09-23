#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the numbers from 0 to 9 using a while loop and printf.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
printf("%d", i);
i++;
}
printf("\n");
return (0);
}
