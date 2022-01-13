#include <cstdio>
#include <cstdlib>
#include <cstring>

struct celula {
    int chave;
    celula *prox;
};

celula *insere(celula *p, int n) {
  celula *sem_cabeca = (celula *)malloc(sizeof(celula));
  sem_cabeca->chave = n;
  sem_cabeca->prox = p;
  return sem_cabeca;
}


bool checa_conteudo(celula*l1, celula *l2){
    // Aqui eu deveria fazer a coisa acontecer.
    // MAS nao deu tempo.

}


int main(){
    //Alocando memoria dinamicamente e declarando variaveis
    celula *cabeca1, *cabeca2;
    int i;
    int numeros;
    cabeca1 = (celula *) malloc(sizeof (celula));
    cabeca2 = (celula *) malloc(sizeof (celula));
    cabeca1->prox = NULL;
    cabeca2->prox = NULL;
    int n1;
    int n2;
    // Lendo entradas
    scanf("%d %d", &n1, &n2);
    for(i = 0; i < n1; i++){
        scanf("%d",&numeros);
        cabeca1 = insere(cabeca1, numeros);
    }
    for(i = 0; i < n1; i++){
        scanf("%d",&numeros);
        cabeca2 = insere(cabeca2, numeros);
    }



    return 0;
}