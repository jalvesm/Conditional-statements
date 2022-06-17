// 1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int primeiro_numero;
    setlocale(LC_ALL, "portuguese");
    printf("Informe o número inteiro: \n");
    scanf("%i", &primeiro_numero);
    if (primeiro_numero % 2 == 0)
    {
        printf("O número informado é par. \n\n");
    }
    else
    {
        printf("O número informado é impar.\n\n");
    }
    return 0;
}