#include <cstdio>
#include <cstdlib>
/*
Dizemos que uma matriz quadrada de inteiros distintos é um quadrado
mágico se a soma dos elementos de cada linha, a soma dos elementos 
de cada coluna e a soma dos elementos da diagonal
principal e secundária são iguais.
Escreva um programa que seja capaz de responder se
uma matriz quadrada de tamanho n < 100 é um quadrado mágico.
*/

//Funcao que testa se é quadrada.
int quadrado_magico(int **M, int n){
    int i, j;
    int soma, result;
    //Somar diagonal secundaria
    soma = 0;
    for(i = 0; i < n; i++){
        soma = soma + M[i][n - 1 - i];
    }
    result = soma;
    //Somar diagonal principal
    soma = 0;
    for(i = 0; i < n; i++){
        soma = soma + M[i][i];
    }
    //Confirmar se as somas são iguais.
    if(result != soma){
        return 0;
    }
    //Somar linhas.
    for(i = 0; i < n; i++){
        soma = 0;
        for(j = 0; j < n; j++){
            soma = soma + M[i][j];
        }
        if(result != soma){
            return 0;
        }
    }
    //Somar colunas.
    for(j = 0; j < n; j++){
        soma = 0;
        for( i = 0; i < n; i++){
            soma = soma + M[j][i];
        }
        if(result != soma){
            return 0;
        }
    }
    //Se todas forem iguais.
    return 1;
}


//Funcao principal
int main(){

    int n;
    int **M;
    int i, j;
    //Numero de linhas que tem a matriz. 
    scanf("%d", &n);
    //Alocando matriz dinamicamente.
    M = (int **)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        M[i] = (int*)malloc(sizeof(int)*n);
    }
    //Escaneando matriz.
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &M[i][j]);
        }
    }
    //Recrutar funcao.
    int retorno = quadrado_magico(M, n);

    //Saída
    if(retorno == 0){
        printf("Nao!");
    } else {
        //Esse if aqui nem precisava.
        if(retorno == 1){
            printf("Quadrada!");
        }
    }
    /*
    //Teste para ver se ta rodando.
    for(i = 0; i < n; i++){++
        for(j = 0; j < n; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    */
   for(i = 0; i<n; i++){
       free(M[i]);
   }
    free(M);
    return 0;
}