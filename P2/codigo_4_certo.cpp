#include <cstdio>
#include <cstdlib>

// Programa que conta quantas celulas foram alocadas.

struct celula {
    int chave;
    celula *prox;
};

//insercao
void insere(celula *lst, int chave) {
    celula *nova;
    nova = (celula *) malloc(sizeof (celula));
    // Armazenar
    nova->chave = chave;
    // Fazer as ligacoes
    nova->prox = lst->prox;
    lst->prox = nova;
}

// Contar celulas.
int conta_celulas(celula *lista){
    celula *p;
    p = lista;
    int i = 0;
    while(p->prox != NULL){
        p = p->prox;
        i++;
    }
    // Retornar contagem.
    return i;
}

void limpaLista(celula **lista){
    celula *q;
    while(*lista != NULL){
        q = *lista;
        *lista = q->prox;
        free(q);
    }
}


int main(){
    //Alocando memoria dinamicamente e declarando variaveis
    celula *cabeca;
    int i;
    int inteiros;
    cabeca = (celula *) malloc(sizeof (celula));
    cabeca->prox = NULL;
    int n;
    // Lendo entradas
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &inteiros);
        insere(cabeca, inteiros);
    }

    // Retornar resultados
    int result = conta_celulas(cabeca);

    printf("%d", result);

    // Limpar memoria.
    limpaLista(&cabeca);



    return 0;
}