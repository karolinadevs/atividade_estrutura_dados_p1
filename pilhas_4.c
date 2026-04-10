#include <stdio.h>

void decimal_para_binario(int decimal)
{
    t_pilha p;
    inicializa(&p);

    if (decimal == 0)
    {
        printf("0");
        return;
    }

    // Divisões sucessivas guardando os restos
    while (decimal > 0)
    {
        int resto = decimal % 2;
        empilha(&p, resto);
        decimal = decimal / 2;
    }

    // A impressão desempilhando garante a ordem inversa correta
    printf("Binario: ");
    while (!pilha_vazia(&p))
    {
        printf("%d", desempilha(&p));
    }
    printf("\n");
}