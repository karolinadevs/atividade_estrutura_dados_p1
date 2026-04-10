#include <stdio.h>

int main()
{
    int pares[10], impares[10];
    int cont_pares = 0, cont_impares = 0; // Marcadores
    int num;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            pares[cont_pares] = num;
            cont_pares++;
        }
        else
        {
            impares[cont_impares] = num;
            cont_impares++;
        }
    }

    printf("\nVetor de Pares: ");
    for (int i = 0; i < cont_pares; i++)
        printf("%d ", pares[i]);

    printf("\nVetor de Impares: ");
    for (int i = 0; i < cont_impares; i++)
        printf("%d ", impares[i]);

    return 0;
}