int busca_item(t_pilha *p, int alvo) {
    t_pilha aux;
    inicializa(&aux);
    int posicao = 1;
    int encontrado = -1;

    // Procura o item esvaziando a pilha principal
    while (!pilha_vazia(p)) {
        int valor = desempilha(p);
        empilha(&aux, valor);

        if (valor == alvo && encontrado == -1) {
            encontrado = posicao;
        }
        posicao++;
    }

    // Restaura a pilha original, desempilhando da auxiliar
    while (!pilha_vazia(&aux)) {
        empilha(p, desempilha(&aux));
    }
    return encontrado;
}
