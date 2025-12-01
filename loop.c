#include <stdio.h>
#include <stdlib.h>
#define NUMERO_DE_CHUTES 3



int main() {
    
printf("************************************\n* Bem-vindo ao Jogo de Adivinhação *\n ************************************\n\n");
    for(int i = 1; i <= NUMERO_DE_CHUTES; i++) {

        int numerosecreto = 10;
        int chute;

        printf("Qual é o seu %do. chute? ", i);
        scanf("%d", &chute);
        printf("Seu %do. chute foi %d\n", i, chute);
        
        int acerto = chute == numerosecreto;

        if(chute < 0){
            printf("voce nao pode usar numeros negativos!");
            i--;          // devolve a rodada ao jogador
            continue;     // pula o resto do código e vai para o próximo ciclo do for
        }

        if(acerto) {
            printf("voce acertou, o numero secreto e %d \n", numerosecreto);
            break;
        } else {
            int maior = chute > numerosecreto;
            if(maior) {
                printf("seu numero é maior que o numero secreto1\n");
            } else {
                printf("seu numero é menor que o numero secreto\n");
            }
        }
    }
    printf("fim do jogo.");
    return 0;
}