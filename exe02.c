#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    printf(" 2) Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da média do aluno, uma mensagem de 'Aprovado', caso a media seja igual ou superior a 6, ou a mensagem 'reprovado', caso contrario.");
    char nome_do_aluno[50];
    float nota1, nota2, nota3, media_das_notas;
    printf("\nInforme o nome do aluno: \n");
    gets(nome_do_aluno);
    printf("Informe a primeira nota do aluno.\n");
    scanf("%f", &nota1);
    printf("Informe a segunda nota do aluno.\n");
    scanf("%f", &nota2);
    printf("Informe a terceira nota do aluno.\n");
    scanf("%f", &nota3);
    media_das_notas = (nota1 + nota2 + nota3)/3
    if (media_das_notas >= 6)
    {
        printf("O aluno %s foi aprovado. \n\nMédia: %2.2f\n", nome_do_aluno, media_das_notas);
    }
    else
    {
        printf("O aluno %s foi reprovado.\n\nMédia: %2.2f\n", nome_do_aluno, media_das_notas);
    }
    return 0;
}
