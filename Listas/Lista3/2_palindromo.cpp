#include <cstdio>
#include <cstring>

int main(){
    
    //Delcarando string.
    char string[100];
    char string_sem_espaco[100];
    char string_aux[100];
    int i;

    //Ler string.
    scanf("%[^\n]s", string);
    //-----------------------------------------------------------------
    //Trasnformar tudo em maiusculo string.
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] >= 97 && string[i] <= 122){
            string[i] = string[i] - 32;
        }
    }
    
    //-----------------------------------------------------------------
    //Armazenar string em outra string sem espaço.
    int j = 0;
    for(i = 0; i < strlen(string); i++){
        if(string[i] != ' '){
            string_sem_espaco[j] = string[i];
            j++;
        }
    }
    string_sem_espaco[j] = '\0';
    //----------------------------------------------------------------
    //Armazenar a string sem espaço invertida na string_aux.
    int n = 0;
    for(i = strlen(string_sem_espaco) - 1; i>= 0; i--){
        string_aux[n] =  string_sem_espaco[i];
        n++;
    }
    string_aux[n] = '\0';
    //----------------------------------------------------------------
    //Comparar string com string_aux.
    char retorno;
    retorno = strcmp(string_sem_espaco, string_aux);
    if(retorno == 0){
        printf("palindromo\n");
    } else {
        printf("nao\n");
    }
    //----------------------------------------------------------------
    return 0;
}