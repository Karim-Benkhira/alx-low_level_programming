#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This program generates a random number and determines if it s positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative", n);
return (0);
}
else if (n > 0)
{
printf("%d is positive", n);
}
else
{
printf("zero\n");
}
return (0);
}