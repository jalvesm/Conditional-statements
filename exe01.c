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
        printf("O número informa// 1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void runInEnglish();
void runInPortuguese();
void runInGerman();

int inputedNumber;

int main()
{
    setlocale(LC_ALL, "portuguese");
    setlocale(LC_ALL, "german");
    
    int languageOption;
    printf("Enter 1, 2 or 3 to pick language that you want this program to run:");
    printf("\n1. English\n2. Portuguese\n3. German\n\n");
    printf("Your option: \n");
    scanf("%d", &languageOption);

    switch (languageOption)
    {
    case 1:
        printf("\nNice! You choose Shakespeare's and Newton's language!\n Ok, here's the program:\n| ENGLISH |\n");
        runInEnglish();
        break;

    case 2:
        printf("\nAmazing! You choose the beautiful Camões's & Machado de Assis language!\n Ok, here's the program:\n| PORTUGUÊS |\n");
        runInPortuguese();
        break;

    case 3:
        printf("\nLovely! You choose Goethe's & Leibniz language!\nOk, here's the program:\n| DEUTSCH |\n");
        runInGerman();
        break;

    default:
        printf("Hmmm, looks like there's an error over here. We couldn't recognize the number.");
        break;
    }

    printf("\n\nEND OF PROGRAM!");
    return 0;
}

void runInEnglish()
{
    printf("Informe an integer number to check if it's an even or odd: ");
    scanf("%d", &inputedNumber);

    if (inputedNumber % 2 == 0)
    {
        printf("\nThe number %d you informed is an even!", inputedNumber);
    }
    else
    {
        printf("\nThe number %d you informed is an odd!", inputedNumber);
    }
}

void runInPortuguese()
{
    printf("Informe um número para checar se é par ou ímpar: ");
    scanf("%d", &inputedNumber);

    if (inputedNumber % 2 == 0)
    {
        printf("\nO número %d informado é par!", inputedNumber);
    }
    else
    {
        printf("\nO número %d informado é ímpar!", inputedNumber);
    }
}

void runInGerman()
{
    printf("Gerade oder ungerade Zahl? Bestätigen Sie hier!\nInformieren Sie bitte die Nummer: ");
    scanf("%d", &inputedNumber);

    if (inputedNumber % 2 == 0)
    {
        printf("\nDie %d nummer ist gerade!", inputedNumber);
    }
    else
    {
        printf("\nDie %d nummer ist ungerade!", inputedNumber);
    }
}do é par. \n\n");
    }
    else
    {
        printf("O número informado é impar.\n\n");
    }
    return 0;
}
