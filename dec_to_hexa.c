#include <stdio.h>

/**
 * decToHexa - convert decimal to hexadecimal in uppercase
 */

char decToHexa(unsigned long long int varULL_dec)
{
    char varChr_hexa_temp[1024] = {}, varChr_hexa[1024] = {};
    unsigned long long int varULL_temp = 0, varULL_step;
    int i = 0, j = 0;

    varULL_step = varULL_dec;
    while(varULL_step != 0)
    {
        varULL_temp = varULL_step % 16;
        if (varULL_temp < 10)
        {
            varChr_hexa_temp[i] = varULL_temp + 48;
                    printf("i: %d = %c\n", i, varChr_hexa_temp[i]);
            i++;
        }
        else
        {
            varChr_hexa_temp[i] = varULL_temp + 55;
                    printf("i: %d = %c\n", i, varChr_hexa_temp[i]);
            i++;
        }
        varULL_step /= 16;
    }
    for(i = i -1 ; i >= 0; i--)
    {
        printf("i: %d, j: %d\n", i, j);
        varChr_hexa[j] = varChr_hexa_temp[i];
        j++;
    }
    printf("dec: %llu TO hexa: %s\n", varULL_dec, varChr_hexa);
    return (varChr_hexa);
}

int main(void)
{
    unsigned long long int varULL_dec;

    varULL_dec = 1500;
    decToHexa(varULL_dec);
    return (0);
}