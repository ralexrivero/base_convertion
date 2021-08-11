#include <stdio.h>
#include <limits.h>

/**
 * hexa - convert decimal to hexadecimal in uppercase
 * Description: This function prints a unsigned hexadecimal
 * Return: the length of output
 */
unsigned int hexa(unsigned int dec)
{
    unsigned int varULL_step = dec, varULL_temp = 0;
    char varChr_hexa_temp[1024];
    int i = 0, count = 0;
    

    while(varULL_step != 0)
    {
        varULL_temp = varULL_step % 16;
        if (varULL_temp < 10)
        {
            varChr_hexa_temp[i] = varULL_temp + 48;
            i++;
        }
        else
        {
            varChr_hexa_temp[i] = varULL_temp + 55;
            i++;
        }
        varULL_step /= 16;
    }
    for(i = i -1 ; i >= 0; i--)
    {
        count += putchar(varChr_hexa_temp[i]);
    }
    return (count);

}

int main(void)
{
    unsigned long int dec = UINT_MAX + 1024;
    hexa(dec);
        putchar('\n');
    return(0);
}