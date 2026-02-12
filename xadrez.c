#include <stdio.h>

int main() {

    /* Movimeto da torre(for)
       torre deve se mover em linha reta
       andar 5 casas para a direita*/

    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* Movimento do bispo (while)
        Bispo se move na diagonal.
        Anda5 casas para cima e à direita */

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");

    /*Movimento da rainha(do while)
       Rainha move-se em todas as direções.
       anda 8 casas para a esquerda */

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
