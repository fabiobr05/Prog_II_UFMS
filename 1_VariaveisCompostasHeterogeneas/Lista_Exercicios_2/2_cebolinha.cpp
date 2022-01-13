# include <cstdio>
# include <cstring>
// Queremos escrever um programa para saber como o Cebolinha falaria uma palavra.


int main() {

    int tam, i, j;

    // Declarar a string.
    char palavra[100];

    // Ler palavra.
    scanf("%s", &palavra);    

    // Verificar o tamanho da palavra
    tam = strlen(palavra);
    // Declarar e fazer interaçoes para trocar a letra da palavra.
    char nova_palavra[100];
    j = 0;
    for(i = 0; palavra[i] != '\0'; i++) {
        nova_palavra[j] = palavra[i];
        if(nova_palavra[j] == 'R') {
            nova_palavra[j] = 'L';
             if (palavra[i+1] == 'R') {
                i++;
            }
        }
        j++;
    }
    nova_palavra[j] = '\0';
    printf("%s", nova_palavra);


    return 0;
}