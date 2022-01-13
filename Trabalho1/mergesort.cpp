#include <cstdio>
#define MAX 1000


// Este programa tem o intuito de mostrar como o mergesort funciona.
// e seu funcionamento.
// PS.: Vai me ajudar no trabalho.

// Funcao que auxilia no funcionamento do mergesort.
// Esta funcao é INDISPENSAVEL
void intercala(int p, int q, int r, int v[MAX]) {
    int i, j, k, w[MAX];
    i = p; j = q; k = 0;
    while (i < q && j < r){
        if (v[i] <= v[j]) {
            w[k] = v[i]; i++;
        } else {
            w[k] = v[j]; j++; 
        }
        k++;
    }
    while (i < q) {
        w[k] = v[i]; i++; k++; 
    }
    while (j < r) {
        w[k] = v[j]; j++; k++; 
    }
    for (i = p; i < r; i++){
        v[i] = w[i-p];
    }
    
}

// Funcao de ordenacao O(nlog2n).
void mergesort(int p, int r, int v[MAX]) {
    int q;
    // Uma condiçao que executa ate chegar num p menor que o final
    if (p < r - 1) {
        // Vamos fixar o q no meio do vetor.
        q = (p + r) / 2;
        mergesort(p, q, v);     // vetor começo meio.
        mergesort(q, r, v);     // vetor meio final.
        intercala(p, q, r, v);  // vetor meio final.
    }
}



int main(){
    
    int i;
    int tam;
    scanf("%d",&tam);

    int v[tam];
    // Entrando com o vetor.
    for(i = 0; i < tam; i++){
        scanf("%d", &v[i]);
    }
    printf("VOCE DIGITOU: ");
    for(i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }

    printf("\n");

    // Recrutando mergesort para ordernar
    mergesort(0,tam, v);
    
    // Imprimindo o resultado
    printf("O MERGESORT ORDENOU: ");
    for(i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }

    return 0;

}