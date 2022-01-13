// -*- coding: utf-8 -*-
///////////////////////////////////////////////////
//// Created on Saturday Oct 09 18:09:00 2021 /////
//// Program: Ordenacao_Estudantes.cpp ////////////
///// author: Fabio Batista Rodrigues /////////////
///////////////////////////////////////////////////
#include <cstdio>
#include <cstring>

//Estruct Estudante
struct Estudante {
    int RGA;        // Definir o campo RGA.
    char nome[101]; // Definir o campo nome.
    double media;   // Definir o campo media.
};

#define MAX 100000
// Funcao que auxilia o ornadaEstudantes
void intercala(Estudante v[], int p, int q, int n, char op) {
    // Se for a opçao r.
    if(op == 'r'){
        int i, j, k;
        Estudante w[MAX]; 
        i = p; j = q; k = 0;
        while (i < q && j < n){
            if (v[i].RGA <= v[j].RGA) {
                w[k] = v[i]; i++;
            } else {
                w[k] = v[j]; j++; 
            }
            k++;
        }
        while (i < q) {
            w[k] = v[i]; i++; k++; 
        }
        while (j < n) {
            w[k] = v[j]; j++; k++; 
        }
        for (i = p; i < n; i++){
            v[i] = w[i-p];
        }
    }
    
}
// Funcao de ordenacao O(nlog2n).
void mergesort(Estudante v[MAX], int p, int n, char op) {
    int q;
    // Uma condiçao que executa ate chegar num p menor que o final
    if (p < n - 1) {
        // Vamos fixar o q no meio do vetor.
        q = (p + n) / 2;
        mergesort(v, p, q, op);     // vetor começo meio.
        mergesort(v, q, n, op);     // vetor meio final.
        // Intercala adaptado para receber a opçao op.
        intercala(v, p, q, n, op);  // vetor meio final.
    }
}

// Funcao que ordena os estudantes baseado na opcao op
void ordenaEstudantes(Estudante v[], int n, char op){

    // Chamar o mergesort (adaptado).
    mergesort(v, 0, n, op);
    
    

    //Nao retorna nada
}

// Funcao que imprimi apenas um estudante.
void imprimeEstudante(Estudante v[], int k){
    int i;
    if(i >= 0){
        //Imprimir o estudante.
        printf("RGA: %d\n", v[k].RGA);
        printf("Nome: %s\n", v[k].nome);
        printf("Media: %.2lf\n", v[k].media);
        printf("------------\n");
    } else {
        // Se o numero for menor que 0 (no nosso caso = -1)
        printf("RGA: null");
        printf("Nome: null\n");
        printf("Media: null\n");
        printf("------------\n");

    }
}
// Funcao que imprimi todos os estudantes com ordenacao.
void imprimeEstudantes(Estudante v[], int n){
    for(int i= 0; i < n;i++){
        imprimeEstudante(v, i);
    }
    
}



int main(){

    //////////////////////////////////////////////
    /////////// ARQUVIO A SER LIDO ///////////////
    // Indicar indereço de arquivo. //////////////
    FILE *p; /////////////////////////////////////
    //Receber arquivo com as entradas ////////////
    p = fopen("entradas.txt","r"); ///////////////
    //////////////////////////////////////////////
    int n, i;
    Estudante estudantes[10000];
    //Entre com o numero de estudantes.
    fscanf(p, "%d", &n);
    // Inicializar struct
    for(i=0; i < n; i++) {
        estudantes[i].RGA = 0;
        strcpy(estudantes[i].nome, "null");
        estudantes[i].media = 0.0;
    }
    // Receber o RGA o nome e a media de cada estudante.
    for(i = 0; i < n; i++) {
        fscanf(p,"%d", &estudantes[i].RGA);
        fscanf(p," %[^\n]s", estudantes[i].nome);
        fscanf(p,"%lf", &estudantes[i].media);
    }
    
    //ordena opcao op.
    char op;
    int c_num;
    fscanf(p," %c", &op);
    fscanf(p,"%d", &c_num);
    //////////////////////////////////////////////
    // Etrutura que armazena os nomes de busca. //
    struct pessoa { ////////////////////////////////
        char nome[101]; // Definir o campo nome.//
    }; ///////////////////////////////////////////
    pessoa nomes[500]; ///////////////////////////
    //////////////////////////////////////////////
    for(int i = 0; i < c_num; i++) {
        fscanf(p," %[^\n]s", nomes[i].nome);
    }

    // SAIDA DE DADOS.

    // Ordernar os estudantes.
    ordenaEstudantes(estudantes, n, op);
    printf("\n");
    imprimeEstudantes(estudantes, i);

    


    // esperar uma variavel para fechar a janela.
    char nao_feche;
    scanf(" %c", &nao_feche);
    ////////////////////////////////
    ///// Fecha o arquvio lido /////
    fclose(p);//////////////////////
    // Retornar valor a funçao principal.
    return 0;


    
}



// 1 - Ordena Estudante chamar o mergesort.
// 2 - Terminar o opçao mopdificando no intercala.
// 3 - Usar a busca binaria.




// //Funcao que busca o estudante pelo nome.
// int buscaRGA(Estudante v[], int n, int RGA){
//     // Devolve o indice de onde o estudante se encontra
//     // Se for encontrado devolve i se nao devolve -1.
//     return 0;
// }
// //Funcao que busca o estudante pelo RGA.
// int buscaNome(Estudante v[], int n, char nome[]){
//     // Devolve o indice de onde o estudante se encontra
//     // Se for encontrado devolve i se nao devolve -1.
//     return 0;
// }
// // Funcao que busca o estudante pela media.
// int buscaMedia(Estudante v[], int n, double media){
//     // Devolve o indice de onde o estudante se encontra.
//     // Se for encontrado devolve i se nao devolve -1.
//     return 0;
// }



