#include <stdio.h>
 int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;
    // movimento da torre
    printf("***Movimento da Torre***\n");
    while (torre <= 5) {
        printf("Direita\n"); //direção que a peça foi movimentada
        torre++;
    }

    // movimento do bispo
    printf("***Movimento do Bispo***\n");
    do {
        printf("Diagonal direita\n");//direção que a peça foi movimentada
        bispo++;
    } while (bispo <=5 );

    // movimento da rainha
    printf("***Movimento da Rainha***\n");
    for(rainha = 0; rainha < 8; rainha++){

        printf("esquerda\n");//direção que a peça foi movimentada
    }
    
    //movimento do cavalo
    printf("***Movimento do Cavalo***\n");
    while (cavalo--){
        for (int i = 0; i < 2; i++)
        {
            printf("baixo\n");//direção que a peça foi movimentada
        }
       printf("esquerda\n");//direção que a peça foi movimentada
    }
     

   return 0;
}