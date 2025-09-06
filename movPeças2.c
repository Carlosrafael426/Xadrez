#include <stdio.h>

void moverTorre(int casas){
    for(int i = casas; i > 0; i--){
        printf("Direita\n");
    }
}

void moverBispo(int casas){
    for(int i = casas; i > 0; i--){
        printf("Diagonal Direita\n");
    }
}

void moverRainha(int casas){
    for(int i = casas; i > 0; i--){
        printf("Esquerda\n");
    }
}

int main(){
    printf("*** Mover Torre ***\n");
    moverTorre(5);
    printf("*** Mover Bispo ***\n");
    moverBispo(5);
    printf("*** Mover Rainha ***\n");
    moverRainha(8);
    return 0;
}