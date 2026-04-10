#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\nMultiplos de 3 encontrados:\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 3 == 0) {
            printf("Numero: %d | Posicao: %d\n", vetor[i], i);
        }
    }

    return 0;
}
