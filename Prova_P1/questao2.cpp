#include <cstdio>

int main(){

    struct ele {
        char Nome[16];   // define o campo nome
        float Potencia;    // define o campo potencia
        float tempo_hora; // define o campo tempo_hora
    } ; // Define o nome registro


    int n;
    struct ele eletro[100];
    int i;
    int ndias;
    
    scanf("%d",&n);
    //ler as caracteristicas dos eletrodomesticos.
    for(i = 0; i < n; i++){
        scanf("%s", eletro[i].Nome);
        scanf("%f", &eletro[i].Potencia);
        scanf("%f", &eletro[i].tempo_hora);
    }
    //Escanear ndias
    scanf("%d",&ndias);

    //Clacular o consumo.
    float cons = 0;
    for(i = 0; i < n; i++){
        cons += (eletro[i].Potencia * eletro[i].tempo_hora) * ndias;
    }
    // A porcentagem de consumo de cada eletrodoméstico, 
    // na mesma ordem em que foram lidos
    float cons_cada[100];
    float consumo;
    for(i = 0; i < n; i++){
        consumo = (eletro[i].Potencia * eletro[i].tempo_hora) * ndias;
        cons_cada[i] = (consumo/cons) * 100;
    }

    //Saida de dados
    printf("%.2f\n", cons);
    for(i = 0; i < n; i++){
        printf("%.2f %%\n", cons_cada[i]);
    }


    return 0;
}