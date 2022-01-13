#include <cstdio>

// Escreva uma funçao que preencha uma matriz quadrada de dimensao n com
// a matriz identidade In. Use um único ponteiro que percorra a matriz.
int main(){

    int *p, tam;
    // Ler o tamanho
    scanf("%d", &tam);
    int A[tam][tam];
    // Gerar matriz quadrada. 
    for(p = &A[0][0]; p <= &A[tam-1][tam-1]; p++){
        // Aqui A[0] representa um endereço de memoria e nao um valor
        // como em python
        int i = p - A[0];
        if(i % (tam + 1) == 0 ){
            *p = 1;
        } else {
            *p = 0;
        }
    }

    // Imprimir matriz
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", A[i][j]);
        }
        // Ir para a proxima linha.
        printf("\n");
    }

    return 0;
}