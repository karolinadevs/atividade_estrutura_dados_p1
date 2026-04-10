void transfere_pilha(t_pilha *p1, t_pilha *p2) {
    t_pilha aux;
    inicializa(&aux);

    // Tira de p1 e põe na auxiliar (inverte)
    while (!pilha_vazia(p1)) {
        empilha(&aux, desempilha(p1));
    }

    // Tira da auxiliar e põe em p2 (volta a ordem original)
    while (!pilha_vazia(&aux)) {
        empilha(p2, desempilha(&aux));
    }
}
