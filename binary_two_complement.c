#include <stdio.h>
#include <string.h>
/**
 * bin_2_complement - complement of two convertion
 * Description: too function to revert complement to binary 
 * @varChr_binary: base 2 number to complement
 * Return: the complement number
 */

int bin_2_complement(char *varChr_binary)
{
        int varInt_length = strlen(varChr_binary), i = 0;
        char varChr_complement[varInt_length + 1];

        i = varInt_length -1;

        while (varChr_binary[i] == '0')
        {
        varChr_complement[i] = varChr_binary[i];
        i--;
        }
        varChr_complement[i] = varChr_binary[i];
        i--;
        for (i; i >= 0; i--)
        {
        varChr_complement[i] = varChr_binary[i] == '0' ? '1' : '0';
        }
        varChr_complement[varInt_length] = '\0';
        printf("length: %d, binary: %s, complement: %s\n",varInt_length, varChr_binary, varChr_complement);
        return (varChr_complement);
}

/**
 * main - entry point
 * 
 * test for complement prototype
 */
int main(void)
{
        char varChr_binary[] = "00110000";
        /* 00110000 represent 48 in base 10, two's complement 11010000*/
        
        bin_2_complement(&varChr_binary);
        
        return (0);
}