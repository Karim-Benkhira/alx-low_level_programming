#include <stdio.h>
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
    return (0);
}