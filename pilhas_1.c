// Usando duas pilhas auxiliares para inverter a principal
void inverte_pilha(t_pilha *p) {
    t_pilha aux1, aux2;
    inicializa(&aux1);
    inicializa(&aux2);

    // Passo 1: Passa tudo de P para Aux1 (Pilha fica vazia e Aux1 invertida)
    while (!pilha_vazia(p)) {
        empilha(&aux1, desempilha(p));
    }
    // Passo 2: Passa tudo de Aux1 para Aux2 (Aux2 fica na ordem original)
    while (!pilha_vazia(&aux1)) {
        empilha(&aux2, desempilha(&aux1));
    }
    // Passo 3: Passa tudo de Aux2 para P (P finalmente recebe invertido)
    while (!pilha_vazia(&aux2)) {
        empilha(p, desempilha(&aux2));
    }
}
