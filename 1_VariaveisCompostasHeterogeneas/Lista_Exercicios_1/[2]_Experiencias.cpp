# include <cstdio>

int main(){

    // Declarar variaveis
    int N, i, ent1;
    char ent2;
    int cobaias, tipo;
    int coelho, sapo, rato;
    int coel, sap, rat;
    float perct_coelho, perct_rato, perct_sapo;
    // Ler o numero de vezes que o codigo vai se repetir
    scanf("%d", &N);

    cobaias = 0;
    tipo = 0;
    coelho = 0;
    rato = 0;
    sapo = 0;
    perct_coelho = 0.0;
    perct_rato = 0.0;
    perct_sapo = 0.0;
    for(i=0; i<N; i++){

        // Ler o numero e o caracter da entrada
        scanf("%d %c", &ent1, &ent2);
        // Teste printf("Voce digitou %d %c\n", ent1, ent2);

        //Cobaias
        cobaias = ent1 + cobaias;

        // Condiçoes que vao computar o numero de ratos, coelhos e sapos.
        if(ent2 == 'C'){
            coelho = coelho + ent1;
        }
        if(ent2 == 'R'){
            rato = rato + ent1;
        } 
        if(ent2 == 'S'){
            sapo = sapo + ent1;
        }
    }

    // Percentual de coelhos, ratos e sapos
    perct_coelho = (float)coelho / cobaias * 100;
    perct_rato = (float)rato / cobaias * 100;
    perct_sapo = (float)sapo / cobaias*100;

    // Saida de dados
    printf("Total: %d cobaias\n",cobaias);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", perct_coelho);
    printf("Percentual de ratos: %.2f %%\n", perct_rato);
    printf("Percentual de sapos: %.2f %%\n", perct_sapo);

    return 0;
}