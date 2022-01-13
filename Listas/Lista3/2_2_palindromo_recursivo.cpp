#include <cstdio>
#include <cstring>

// Este programa diz se uma palavra é um palindromo apenas com recursao.

// Inverter string 
void inverte(char v[], int ini, int fim){
    
    char c[100];
    for(int i=0; i < fim; i++){
        c[i] = v[i];
    }
    for(fim = strlen(v) - 1; fim>= 0; fim--){
        v[ini] =  c[fim];
        ini++;
    }
    v[fim] = '\0';
    
}
// Funçao responsavel por dizer se é palindromo ou nao.
bool palindromo(char v[], int n, char c[],int i) {
    if(i == n) {
        return true;
    }
    if(v[i] != c[i]){
        return  false;
    }
    palindromo(v, n, c,i+1);
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
    nome[n] = '\0';
    // PROCESSAMENTO.
    inverte(string, 0, n);

    // SAIDA DE DADOS
    if(palindromo(string, n, nome,0) == true) {
        printf("palindromo");
    } else {
        printf("nao");
    }

    return 0;
}