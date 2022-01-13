#include <cstdio>
#include <cstdlib>
/*
Dizemos que uma sequência de n elementos, com n par, é balanceada se as seguintes somas são todas iguais:
-> a soma do maior elemento com o menor elemento;
-> a soma do segundo maior elemento com o segundo menor elemento;
-> a soma do terceiro maior elemento com o terceiro menor elemento;
-> e assim por diante...
Exemplo:
[2, 12, 3, 6, 16, 15] é uma sequência balanceada, já que:
16 + 2 = 15 + 3 = 12 + 6
*/

// O CODIGO NÃO ESTA CERTO, PRECISA RETORNAR O VELOR CORRETO.


void seq_balanceada(int n, int *vetor){
    int indice, soma, soma1, i;
    indice = n - 1;
    // Ordenar
    //estrutura de ordenação com laços for 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(*(vetor+i) < *(vetor + j)){
                //troca as variaveis de lugar
                int aux;
                aux = *(vetor+i);
                *(vetor+i) = *(vetor+j);
                *(vetor+j) = aux;
            } 
        }
    }
    //Ordenado, agora comparamos.
    soma = vetor[0] + vetor[indice];
    for (i = 1; i <= (n / 2) - 1; i++) {
        indice--;
        soma1 = vetor[i] + vetor[indice];
        if (soma != soma1)
            i = n * 2;
        soma = soma1;
    }
    if (i == n + 1 * 2){
        printf("Nao!");
    }
    else {
        printf("Ok!");
    }
}

// Funcao principal
int main(){

    int *vetor;
    int n;
    //Ler inteiro n.
    scanf("%d",&n);
    // Aloancando vetor dinamicamente
    vetor = (int *) malloc(n * sizeof(int));
    // Laço de repetiçao para entrada.
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    //Recrutar funçao para verificar.
    seq_balanceada(n, vetor);
    
    free(vetor);
    
    return 0;
}