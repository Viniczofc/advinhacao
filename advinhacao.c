#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
    printf("************************************\n* Bem-vindo ao Jogo de Adivinhação *\n ************************************\n\n");

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    int numerosecreto = 10;

    int acertou = chute == numerosecreto;
    if (acertou)
    {
        printf("Parabéns! Você acertou!\n");
    }
    else
    {
        int maior = chute > numerosecreto;
        if (maior)
        {
            printf("Seu chute foi maior do que o número secreto!\n");
        }
        else
        {
            printf("Seu chute foi menor do que o número secreto!\n");
        }
    }
} /* final do main*/
