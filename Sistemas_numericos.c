#include <stdio.h>
#include <math.h>
#include "lib/menus.h"
#include "func/octal.h"
#include "func/func_binario.h"

int main()
{
    int opcao, subopcao;

    while (1)
    {
        menu_inicial();
        scanf("%d", &opcao);

        if (opcao == 5)
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
        case 4:
        
            menu_Octal();
            scanf("%d",&opcao);
    
            int num;
            switch (opcao)
            {
            case 1:
                printf("Informe o numero decimal");
                scanf("%d",&num);
                int valorOctalReturn = DecimalOctal(num);
                printf("Valor Octal %d\n",valorOctalReturn);
                break;
            case 2:
                printf("Informe o numero Octal");
                scanf("%d",&num);
                int valorDecimalReturn = OctalDecimal(num);
                printf("Valor Decimal %d\n",valorDecimalReturn);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }
}
