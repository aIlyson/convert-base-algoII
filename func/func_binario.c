#include <stdio.h>
#include <math.h>
#include "func_binario.h"

void decbin_part_frac()
{
    float num;
    printf("Digite a parte fracionaria(ex:0.0625): \n");
    scanf("%f", &num);
    int vetfrac[32];
    int i = 0;

    while (num > 0 && i < 300)
    {
        num *= 2;
        vetfrac[i] = (int)num;
        num -= vetfrac[i];
        i++;
    }
    printf("Parte fracionaria em binario: ");
    for (int j = 0; j < i; j++)
    {
        printf("%d", vetfrac[j]);
    }
    printf("\n");
}

void dec_bin(int num)
{
    int vet[32];
    int i = 0;

    do
    {
        vet[i] = num % 2;
        num /= 2;
        i++;
    } while (num > 0);
    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d ", vet[j]);
    }
    printf("\n");
}

int parteint()
{
    int vet[32];
    int j, soma = 0;

    printf("Digite a quantidade de digitos que a parte inteira do binario tem: \n");
    scanf("%d", &j);

    for (int i = 0; i < j; i++)
    {

        printf("Digite o %d* binario: \n", i + 1);
        scanf("%d", &vet[i]);

        if (vet[i] == 1)
        {
            soma += (int)pow(2, j - 1 - i);
        }
    }
    return soma;
}

float partfrac()
{
    int vet[32];
    int j;
    float soma = 0;

    printf("Digite a quantidade de digitos que a parte fracionaria do binario tem: \n");
    scanf("%d", &j);

    for (int i = 0; i < j; i++)
    {

        printf("Digite o %d* binario: \n", i + 1);
        scanf("%d", &vet[i]);

        if (vet[i] == 1)
        {
            soma += pow(2, -(i + 1));
        }
    }
    return soma;
}

float ler_binario()
{
    int opcaofrac;
    printf("O binario tem parte fracionaria? (sim(1), nao(0)): ");
    scanf("%d", &opcaofrac);

    int parte_inteira = parteint();
    float resultado = (float)parte_inteira;

    if (opcaofrac == 1)
    {
        resultado += partfrac();
    }

    return resultado;
}

float adicaobin()
{

    float num1 = ler_binario();
    float num2 = ler_binario();
    return num1 + num2;
}

float subtracaobin()
{
    float num1 = ler_binario();
    float num2 = ler_binario();
    return num1 - num2;
}

float multibin()
{
    float num1 = ler_binario();
    float num2 = ler_binario();
    return num1 * num2;
}

float divbin()
{
    float num1 = ler_binario();
    float num2 = ler_binario();
    return num1 / num2;
}