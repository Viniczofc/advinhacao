#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("************************************\n* Bem-vindo ao Jogo de Adivinhação *\n ************************************\n\n");

    int numerosecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    while (!ganhou)
    {
        printf("qual seu %do, chute? ", tentativas);
        scanf("%d", &chute);

        if (chute < 0) {
            printf("voce nao pode chutar numeros negativos\n");
            continue;
        }
        if (chute == numerosecreto) {
            printf("voce acertou.\n");
            ganhou = 1;
        }
        tentativas++;
    }
    
}