#include <stdio.h>
#include <math.h>
#include "lib/menus.h"

// função que lê a parte decimal fracionária e converte em binário
void decbin_part_frac();
// Função que recebe como parametro um numero decimal inteiro e converte em binário
void dec_bin(int num);
// Função que lê A parte binária inteira e converte em decimal.
int parteint();
// Função que lê a parte binária fracionária e converte em decimal.
float partfrac();
// Função que direciona a parte Inteira e fracionária para a sua devida função.
float ler_binario();
// operação de adição
float adicaobin();
// operação de subtração
float subtracaobin();
// operação de multiplicação
float multibin();
// operação de divisão
float divbin();

int main()
{
    int opcao, subopcao;

    while (1)
    {
        menu_inicial();
        scanf("%d", &opcao);

        if (opcao == 4)
        {
            printf("Saindo do programa...\n");
            break;
        }
        switch (opcao)
        {
        case 1:
            printf("O binario tem parte fracionaria?(sim(1),nao(0))");
            int opcaofrac;
            scanf("%d", &opcaofrac);

            if (opcaofrac == 0)
            {
                printf("O numero decimal correspondente eh: %d\n", parteint());
            }
            else
            {
                int x = parteint();
                float y = (float)x + partfrac();
                printf("O numero decimal correspondente eh: %f\n", y);
            }

            break;

        case 2:
            menu_operacao();
            scanf("%d", &subopcao);
            float resultado;
            switch (subopcao)
            {
            case 1:
                
                resultado = adicaobin();
                printf("A Soma dos dois binarios em decimal eh: %f\n", resultado);
                printf("o resultado em "); dec_bin((int)(resultado));
                break;
            case 2:
                resultado = subtracaobin();
                printf("A Subtracao dos dois binarios em decimal eh: %f\n", resultado);
                printf("o resultado em "); dec_bin((int)(resultado));
                break;
            case 3:
                resultado = multibin();
                printf("A Multiplicacao dos dois binarios em decimal eh: %f\n", resultado);
                printf("o resultado em "); dec_bin((int)(resultado));
                break;
            case 4:
                resultado = divbin();
                printf("A Divisao dos dois binarios em decimal eh: %f\n", resultado);
                printf("o resultado em "); dec_bin((int)(resultado));
                break;
            default:
                break;
            }
            break;
        case 3:
            printf("O decimal tem parte fracionaria?(sim(1),nao(0))");
            int opcaofraci;
            scanf("%d", &opcaofraci);

            if (opcaofraci == 0)
            {
                int num;
                printf("Digite um numero decimal: \n");
                scanf("%d", &num);
                dec_bin(num);
            }
            else
            {
                int num;
                printf("Digite um numero decimal: \n");
                scanf("%d", &num);
                dec_bin(num);
                decbin_part_frac();
            }

            break;
        default:
            break;
        }
    }
}

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