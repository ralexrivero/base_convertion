#include <stdio.h>

/**
 * main - convert base 10 to base 2
 * Description: save in array the modulo of n
 * return: always zero
 */

int main(void)
{
    unsigned int binary[1024];
    int n, i = 0;

    n = 98;
    if (n == 0)
    putchar('0');
    while(n != 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    i--;
    while( i >= 0)
    {
        putchar(binary[i] + '0');
        i--;
    }

    putchar('\n');
}