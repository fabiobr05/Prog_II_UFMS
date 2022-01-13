// Este programa executa uma busca binaria
#include <cstdio>

int busca_binaria(int vector[], int comec, int fim, int item){
    int i = (comec + fim) / 2;
    if (comec > fim) {
        return -1;
    }
    if (vector[i] == item) {
        return i;
    }
    if (vector[i] < item) {
        return busca_binaria(vector, i + 1, fim, item);
    } else { // vetor[i] > item
        return busca_binaria(vector, comec, i - 1, item);
    }
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
    printf("%d ", busca_binaria(v,0,tam - 1, item));

}