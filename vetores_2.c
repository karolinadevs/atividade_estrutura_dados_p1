#include <stdio.h>

int main() {
    int v1[10], v2[10];
    int cont_v2 = 0;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v1[i]);
        if (v1[i] > 10) {
            v2[cont_v2] = v1[i];
            cont_v2++;
        }
    }

    printf("\nVetor Original: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v1[i]);
    }
    
    printf("\nVetor Maiores que 10: ");
    for (int i = 0; i < cont_v2; i++) {
        printf("%d ", v2[i]);
    }
    
    return 0;
}
