#include "octal.h"
#include <stdio.h>
#include <math.h>

int DecimalOctal(int valor)
{
    int valorOctal=0, valorOctalFinal=0, resto;

    while (valor >= 8)
    {
        resto = valor % 8;
        valor = valor / 8;
        valorOctal = valorOctal * 10 + resto;
        if (valor < 8)
        {
            valorOctal = valorOctal * 10 + valor;
        }
    }

    while (valorOctal > 0)
    {
        resto = valorOctal % 10;
        valorOctal = valorOctal / 10;
        valorOctalFinal = valorOctalFinal * 10 + resto;
    }
    return valorOctalFinal;
}

int OctalDecimal(int valorOctal)
{
    int valorDecimalFinal=0, resto, index=0;

    while (valorOctal >= 8)
    {
        resto = valorOctal % 10;
        valorOctal = valorOctal / 10;
        valorDecimalFinal = valorDecimalFinal + resto * pow(8 , index);
        index++;
        if (valorOctal < 8)
        {
            valorDecimalFinal = valorDecimalFinal + valorOctal * pow(8 , index);
        }
    }
    return valorDecimalFinal;
}