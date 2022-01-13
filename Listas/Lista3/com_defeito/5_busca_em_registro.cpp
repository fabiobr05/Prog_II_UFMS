#include <cstdio>
// Busca em Registro.
// Suponha que cada elemento de um vetor v[0..n-1] seja um registro com dois campos: 
// o nome do(a) estudante e o número do(a) estudante. Suponha que o vetor está em
// ordem crescente de números. Escreva uma função de busca com eficiência O (lg n) 
// que receba o número de um(a) estudante e devolva seu nome. Se o número não estiver
// no vetor, a função deve devolver a cadeia de caracteres vazia. Logo após, 
// escreva um programa para testar essa função.
// Entrada

// Seu programa deve ler um valor n < 1000, indicando a quantidade de estudantes. A seguir 
// são lidas 2n linhas, onde cada duas linhas contém o número (em ordem crescente) e o nome
// de um estudante, respectivamente. Considere que nenhum estudante
// tem nome com mais de 20 caracteres.
// Após, seu programa deve ler um número c < 1000, indicando a quantidade de buscas a serem
// feitas. Por fim, são lidas c linhas, cada uma com um número de um estudante a ser buscado.

int main() {
    // Declarar variaveis.
    int n, i;
    int c, c_linhas;
    int numeros[100];
    char nome[100];
    // Ler variaveis.
    scanf("%d", &n);
    // Ler numeros e nomes.
    for(i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        scanf("%s", nome[i]);
    }
    printf("entre com o numero de buscas\n");
    // c linhas procuradas.
    scanf("%d", &c);

    for(i = 0; i < c; i++){
        scanf("%d", &c_linhas);
        //Recrutar funçao.
    }
    printf("consegui ler as variaveis\n");
    
    for(i = 0; i < n; i++){
        printf("%s", nome[i]);
    }

    return 0;


}