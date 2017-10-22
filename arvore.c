#define GRAU 2

typedef char tno;
typedef struct _tnoe {
    int cont, folha;
    struct _tnoe *filho[2*GRAU+1];
    tno chave[2*GRAU];
} tnoe;

tnoe * cria_no () {
    tnoe *no;
    no = (tnoe *) malloc(sizeof(tnoe));
    no->cont = 0;
    no->folha = 1;
    for (int i=0; i<=2*GRAU+1; i++)
        no->filho[i] = NULL;
    return no;
}

void cria_vazia (tnoe *arv) {
    arv = NULL;
    return;
}

int arvore_vazia (tnoe arv) {
    return (arv == NULL);
}
