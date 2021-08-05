#include <stdio.h>
#include <math.h>

/**
 * hexToDec - convert base 10 to base 16
 * 
 */

unsigned long long hexToDec(char varChr_hexa[])
{
    int varInt_i = 0, varInt_digit = 0, varInt_power = 0;
    char varChr_digit;
    unsigned long long varInt_decimal = 0;

    while(varChr_hexa[varInt_i])
    {
        varInt_i++;
    }
    while(varInt_i)
    {
    varInt_i--;
    varChr_digit = varChr_hexa[varInt_i];
    if(varChr_digit >= '0' && varChr_digit <= '9')
    varInt_decimal += (varChr_digit - '0') * pow(16, varInt_power++);
    else
    varInt_decimal += (varChr_digit - 'A' + 10)* pow(16, varInt_power++);
    }
    printf("decimal: %llu\n", varInt_decimal);
    return(varInt_decimal);
}

int main(void)
{
    char varChr_hexa[] = "8D";
    unsigned long long varInt_decimal = hexToDec(varChr_hexa);
    return (0);
}