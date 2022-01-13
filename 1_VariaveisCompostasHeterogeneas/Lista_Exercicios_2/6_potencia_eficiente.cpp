#include <cstdio>
#include <cmath>

int potencia(int x, int n){
    // Condiçao que verifica se o numero é igual a zero, par ou impar.
    int solu;
    if(n == 0) {
        solu = 1;
    }
    if(n % 2 == 0 ) {
        solu = pow(pow(x,(n/2)),2);
    } else {
        solu = x * pow(x,n-1);
    }
    return solu;
}


int main() {

    int n, x, resultado;
    // Entrada de dados x e n.
    printf("Insira o inteiro x.\n");
    scanf("%d", &x);
    printf("Insira o inteiro n.\n");
    scanf("%d", &n);
    // Processamento.
    resultado = potencia(x,n);
    // Saida de dados.
    printf("%d", resultado);

    return 0;
}