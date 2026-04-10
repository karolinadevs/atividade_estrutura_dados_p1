#include <stdio.h>
int main() {
    int v1[5], v2[5], v3[10];

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &v1[i]);

    printf("Digite 5 numeros para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }
    // Intercalando
    int j = 0;
    for (int i = 0; i < 5; i++) {
        v3[j] = v1[i];
        j++;
        v3[j] = v2[i];
        j++;
    }

    printf("\nVetor Intercalado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v3[i]);
    }
    return 0;
}
