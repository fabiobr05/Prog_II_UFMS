#include <cstdio>

double harmonica(int n) {
    if(n == 1){
        return 1;
    } else {
        return (float)1/n + harmonica(n - 1);
    }

}
    
int main(){
    // Declarar variaveis
    float serie_harmonica;
    int n;
    
    // Entrada. Ler o numero n.
    scanf("%d", &n);
    
    //Processamento. Requisitar funçao harmonica
    serie_harmonica = harmonica(n);

    // Saida. Entrgar numero final
    printf("%f", serie_harmonica);
    
    return 0;
}