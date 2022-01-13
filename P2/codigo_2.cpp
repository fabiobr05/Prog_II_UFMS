#include <cstdio>
#include <cstdlib>
#include <string.h>

#define  MAX 101

// Checar se tem parenteses aberto e fechado


//Funcao auxiliar
bool checa_parenteses(char *frase){
    int i;
    int j = 0;
    for(i = 0; frase != '\0'; i++){

        if(frase[i] == '('){
            for(i > 0 ; frase[i] != '('; i--){
                if(frase[i] == ')'){
                    j++;
                }
            }
        }
    }
    



}

// Funcao principal
int main(){
    //Declarando variaveis
    char *vetor;
    int tam, i;
    char c[MAX];
    
    // Ler cadeia de caracters.
    scanf("%[^\n]",c);
    // Pegar tamanho da string
    tam = strlen(c);
    // Alocar memoria.
    vetor = (char *) malloc(tam * sizeof(int));
    for(i = 0; i < tam; i++){
        vetor[i] = c[i];
    }

    checa_parenteses(vetor);


    // TESTE
    // for(i = 0; i < tam; i++){
    //     printf("%c", vetor[i]);
    // }




    free(vetor);

    return 0;
}