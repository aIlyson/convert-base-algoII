#ifndef FUNC_BINARIO
#define FUNC_BINARIO

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

#endif