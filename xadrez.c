#include <stdio.h>

#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

void mover_bispo_recursivo(int casas) {
    if (casas <= 0) return;
    printf("%s e %s\n", CIMA, DIREITA);
    mover_bispo_recursivo(casas - 1);
}

void mover_torre_recursivo(int casas) {
    if (casas <= 0) return;
    printf("%s\n", DIREITA);
    mover_torre_recursivo(casas - 1);
}

void mover_rainha_recursivo(int casas) {
    if (casas <= 0) return;
    printf("%s\n", ESQUERDA);
    mover_rainha_recursivo(casas - 1);
}

void mover_cavalo_complexo() {
    for (int vertical = 0; vertical < 2; vertical++) {
        if (vertical == 1) continue;
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("%s\n", CIMA);
        }
    }
    printf("%s\n", DIREITA);
}

int main() {
    printf("Bispo - 5 casas diagonal:\n");
    mover_bispo_recursivo(5);
    
    printf("\nTorre - 5 casas direita:\n");
    mover_torre_recursivo(5);
    
    printf("\nRainha - 8 casas esquerda:\n");
    mover_rainha_recursivo(8);
    
    printf("\nCavalo - L para cima direita:\n");
    mover_cavalo_complexo();
    
    return 0;
}
