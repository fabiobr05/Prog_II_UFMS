#include<cstdio>
#include<cstdlib>

struct celula {
  int chave;
  celula *prox;
};

void empilha_p(int y, celula *t) {
  celula *nova;
  nova = (celula *) malloc(sizeof(celula));
  nova->chave = y;
  nova->prox = t->prox;
  t->prox = nova;
}

int desempilha_p(celula *t) {
  if (t->prox != NULL) {
    celula *p = t->prox;
    int x = p->chave;
    t->prox = p->prox;
    free(p);
    return x;
  } else {
    printf("Pilha vazia!\n");
    return -1;
  }
}

void empilha_S(int y, celula **t) {
  celula *nova;
  nova = (celula *) malloc(sizeof(celula));
  nova->chave = y;
  nova->prox = *t;
  *t = nova;
}

// t -> ponteiro -> ponteiro -> celula
// p -> ponteiro -> celula
int desempilha_S(celula **t) {
  if (*t != NULL) {
    int x = (*t)->chave;
    celula *p = *t;
    p = (*t)->prox;
    free(*t);
    *t = p;
    return x;
  } else {
    printf("Pilha vazia\n");
    return -1;
  }
}

void imprime_pilha(celula *t) {
  while(t->prox != NULL) {
    printf("%d ", t->chave);
    t = t->prox;
  }
  printf("%d\n", t->chave);
}

void limpa_lista(celula **t) {
  celula *p = *t;
  while(p != NULL) {
    celula *lixo = p;
    p = p->prox;
    free(lixo);
  }
  *t = NULL;
}

int main()
{
  // operacoes sem cabeca 
  // topo da pilha
  celula *t = NULL;

  empilha_S(2, &t);  
  empilha_S(10, &t);  
  empilha_S(25, &t);  
  empilha_S(19, &t);  
  imprime_pilha(t);
  int x = desempilha_S(&t);
  printf("Desempilhei %d\n", x);
  imprime_pilha(t);
  limpa_lista(&t);
  return 0;
}