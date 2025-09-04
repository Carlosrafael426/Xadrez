#include <stdio.h>
 int main(){
    int t = 1;
    int b = 1;
    int r = 1;
    // movimento da torre
    printf("***Movimento da Torre***\n");
    while (t <= 5) {
        printf("Direita\n"); //direção que a peça foi movimentada
        t++;
    }

    // movimento do bispo
    printf("***Movimento do Bispo***\n");
    do {
        printf("Diagonal direita\n");//direção que a peça foi movimentada
        b++;
    } while (b<=5 );

    // movimento da rainha
    printf("***Movimento da Rainha***\n");
    for(r = 0; r < 8; r++){

        printf("esquerda\n");//direção que a peça foi movimentada
    }

   return 0;
}