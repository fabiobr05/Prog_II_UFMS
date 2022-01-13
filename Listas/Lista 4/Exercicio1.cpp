#include <cstdio>
/*
Escreva uma função com a seguinte interface:
void percorreVetor(int n, int *p, int k)
que percorre um vetor de tamanho n <= 100 e 
divide todos os elementos de índice múltiplo de k por dois.
Escreva um programa para testar essa função.
Aloque a memória para o vetor estaticamente
*/
// n -- tamanho
// k -- constante
// *p -- conteudo.
void percorreVetor(int n, int *p, int k){
    // Percorre um vetor de tamanho n <= 100 e divide todos os elementos de índice multiplo de k por dois.
    // Alocar a memoria  para testar essa função
    // Laço para percorrer vetor.
    for(int i = 0; i < n; i++){
        // Teste de multiplo de k.
        if(i % k == 0){
            // Dividir o elemento por 2
            //No caso p aponta para o elemento.
            *p = *p / 2;
        }
        if(i + 1 != n){
            printf("%d ", *p);
        } else {
            printf("%d\n", *p);
        }
        // Acrescentar para pegar o proximo endereço.
        p++;
    }
}

#define MAX 100

//Funçao principal
int main(){
    //Declarando variaveis.
    int n, k;
    //Entrada do usuário
    scanf("%d %d", &n, &k);
    //Como temos que alocar a memoria estaticamente...
    int vetor[MAX];
    // Laço de repetiçao para entrada.
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    //Saída.
    /*O programa deve imprimir os elementos do vetor em ordem, separados por um espaço em branco. 
    Ao final, ele deve imprimir uma quebra de linha*/
    percorreVetor(n, vetor, k);
    return 0;

}