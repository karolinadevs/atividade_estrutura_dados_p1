#include <stdio.h>
#include <string.h>

void inverte_palavras(char texto[])
{
    t_pilha_char p; // Assuma uma pilha que armazena caracteres
    inicializa_char(&p);

    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] != ' ' && texto[i] != '.')
        {
            empilha_char(&p, texto[i]);
        }
        else
        {
            // Quando encontrar espaço ou ponto, desempilha imprimindo
            while (!pilha_vazia_char(&p))
            {
                printf("%c", desempilha_char(&p));
            }
            printf("%c", texto[i]); // Imprime o espaço ou ponto
        }
    }
}