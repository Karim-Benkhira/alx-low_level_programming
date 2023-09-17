#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar (alpha);
putchar('\n');
alpha++;
}
return (0);
}
