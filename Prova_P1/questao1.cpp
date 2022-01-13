#include <cstdio>

int soma_digitos(int n){
    //Recursao que fara a analise e restornara
    // a resposta até matar a funçao
    if(n <= 9){
        return n;
    } else {
        return n % 10 + soma_digitos(n/10);
    }

}

int main() {
    //Declarar variavel.
    int n;
    //Escanear a variavel
    scanf("%d", &n);
    //Imprimir a variavel.
    printf("%d",soma_digitos(n));
    //Retornar valor a funçao principal.
    return 0;
}