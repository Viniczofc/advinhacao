#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[]){

/*eu posso fazer comentarios mto legais
 eles sao ignorados pelo compilador.*/
 
    int legal = 10;
    int legal2 = 11;
    int legal3 = 12;
    int legal4 = 13;
    int legal5 = 14;
    int legal6 = 15;


    printf("O número %d %d %d %d %d %d é legal! \n", legal, legal2, legal3, legal4, legal5, legal6);

    // serve pra definir uma variavel, porem vazio. ele reserva um espaço na memoria
    int chute;
    
    // esse print so serve pra deixar bonito. não há o \n, pois nao vai pular linha pro scanf, os dois vao ser na mesma linha.
    printf("Qual é o seu chute? ");

    // o "%d" indica o tipo de variavel, ele serve pra input e pra output tambem. já o &chute serve pra dizer onde o scanf deve colocar o valor.
    scanf("%d", &chute);
    printf("Você chutou o número %d!", chute);

} /*end main*/
