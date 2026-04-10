void separa_pares_impares(t_pilha *p1, t_pilha *pares, t_pilha *impares) {
    t_pilha aux;
    inicializa(&aux);

    // Esvazia p1 e distribui
    while (!pilha_vazia(p1)) {
        int valor = desempilha(p1);
        empilha(&aux, valor); // Guarda na auxiliar para restaurar p1 depois, se necessário

        if (valor % 2 == 0) {
            empilha(pares, valor);
        } else {
            empilha(impares, valor);
        }
    }

    // Opcional: Restaurar p1
    while (!pilha_vazia(&aux)) {
        empilha(p1, desempilha(&aux));
    }
}
