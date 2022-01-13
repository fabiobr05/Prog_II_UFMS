// Este programa executa uma busca binaria
#include <cstdio>


int busca_binaria_rapida(int vector[], int n, int item) {
    int begin = 0;
    int end = n - 1;

    while (begin <= end) {  /* Condição de parada */

        int i = (begin + end) / 2;  /* Calcula o meio do sub-vetor */

        if (vector[i] == item) {  /* Item encontrado */
            return i;
        }

        if (vector[i] < item) {  /* Item está no sub-vetor à direita */
            begin = i + 1;
        } else {  /* vector[i] > item. Item está no sub-vetor à esquerda */
            end = i;
        }
    }

    return -1;
}



int main() {
    
    int item;
    int tam;
    int i;
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

    // Digite o item que voce quer
    scanf("%d", &item);
    // Executar busca binaria.
    printf("%d ", busca_binaria_rapida(v, tam, item));

}