#include <cstdio>
#include <cstring>

// Este programa diz se uma palavra é um palindromo apenas com recursao.

// Inverter string 
char inverte(char v[], int ini, int fim){
    // if(ini == fim)
    //     return v[ini];
    // else {
    //     return inverte(v,ini+1,fim-1);

    // }
    // int aux;
    // if(ini < fim){
    //     aux = v[ini];
    //     v[ini] = v[fim];
    //     v[fim] = aux;
    //     inverte(v, ini+1, fim-1);
    // }

    // int n = 0;
    // int i;
    char c[100];
    for(int i=0; i < fim; i++){
        c[i] = v[i];
    }
    for(fim = strlen(v) - 1; fim>= 0; fim--){
        v[ini] =  c[fim];
        ini++;
    }
    
}
// Funçao responsavel por inverter a string
bool palindromo(char v[], int n, char c[],int i) {
    if(i == n) {
        return true;
    }
    if(v[i] != c[i]){
        printf("%c %c\n", v[i], c[i]);
        return  false;
    }
    palindromo(v, n, c,i+1);
}

void imprimir(char v[], int n, int i) {
    if(i == n){
        printf("%c\n", v[i]);
    } else {
        printf("%c", v[i]);
        imprimir(v, n, i+1);
    }
    
}

int main(){
    char string[100];
    char nome[100];
    int n;
    // ENTRADA DE DADOS
    scanf("%[^\n]s", string);
    //Calcular o tamanho da string.
    n = strlen(string);
    // So pra ver se ta tudo okay.
    for(int i=0; i < n; i++){
        nome[i] = string[i];
    }
    // PROCESSAMENTO.
    inverte(string, 0, n);
    imprimir(string, n, 0);


    // SAIDA DE DADOS
    if(palindromo(string, n, nome,0) == true) {
        printf("palindromo");
    } else {
        printf("nao");
    }

    return 0;
}