#include <cstdio>
#include <cstring>

#define MAX 101

// Funcao que transforma palavras em minusculas tudo em maiuscula.
//Funcao auxiliar.
void maiuscula(char *cadeia){
    //Declarar ponteiro
    char *q;

    for(q = cadeia; *q; q++){
        if(*q <= 122 && *q >= 97){
            // Acrescentar para ficar maiuscula
            *q = *q - 32;
        }
    }
}

// Funcao principal
int main(){
    // Declarando variaveis
    char c[MAX];
    // Receber variaveis.
    scanf("%[^\n]",c);
    //Recrutar função
    maiuscula(c);
    // Imprimir saida.
    printf("%s", c);
    
    return 0;
}

