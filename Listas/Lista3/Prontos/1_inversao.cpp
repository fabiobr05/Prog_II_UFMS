#include <cstdio>
// Esse exercicio troca os componentes de uma lista
// que esta a direita de esq e a esquerda de dir.

void inverte(int v[], int n, int esq, int dir){
    int aux;
    // Versao recursiva
    if(esq < dir){
        aux = v[esq];
        v[esq] = v[dir];
        v[dir] = aux;
        inverte(v, n, esq+1, dir-1);
    }
    
}
// Funçao que imprimi a saida com a lista ja trocada
void imprimir(int v[], int n, int i) {
    if(i == n-1){
        printf("%d \n", v[i]);
    } else {
        printf("%d ", v[i]);
        imprimir(v, n, i+1);
    }
    
}

int main() {

    int lista[1000];
    int esq, dir, n, i;
    
    // Receber as entradas
    // Numero de caracters
    scanf("%d", &n);
    //Ler valores da esquerda e da direita
    scanf("%d %d", &esq, &dir);
    // N inteiros de um vetor
    for(i=0; i < n; i++){
        scanf("%d", &lista[i]);
    }

    inverte(lista, n, esq, dir);
    imprimir(lista, n, 0);

    return 0;
}