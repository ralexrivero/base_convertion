#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - convert decimal to binary
 * Description: from uli to char
 * @n: decimal to convert
 */

void print_binary(unsigned long int n)
{
    unsigned long int varUIn_decimal = n;
	char varChr_binary;
	int i = 0;

	if (varUIn_decimal == 0)
	{
		putchar('0');
		return;
	}
	while (varUIn_decimal > 0)
	{
		varChr_binary[i] = (varUIn_decimal % 2) + '0';
		varUIn_decimal /= 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
		putchar(varChr_binary[i]);
}
