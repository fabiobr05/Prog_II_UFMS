// -*- coding: utf-8 -*-
///////////////////////////////////////////////////
//// Created on Saturday Oct 23 14:30:00 2021 /////
//// Program: Ordenacao_Estudantes.cpp ////////////
///// author: Fabio Batista Rodrigues /////////////
///////////////////////////////////////////////////
#include <cstdio>
#include <cstring>
#define MAX 1000

//Estruct Estudante
struct Estudante {
    int RGA;        // Definir o campo RGA.
    char nome[101]; // Definir o campo nome.
    double media;   // Definir o campo media.
};

// Funcao que auxilia no funcionamento do mergesort.
void intercala(int p, int q, int r, Estudante v[MAX] , char op) {
    // Se opçao r entao ordenar por RGA.
    if(op == 'r'){
        int i, j, k;
        Estudante w[MAX]; 
        i = p; j = q; k = 0;
        while (i < q && j < r){
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
        while (j < r) {
            w[k] = v[j]; j++; k++; 
        }
        for (i = p; i < r; i++){
            v[i] = w[i-p];
        }
    }
}
// Funcao de ordenacao O(nlog2n).
void mergesort(int p, int r, Estudante v[MAX], char op) {
    int q;
    // Uma condiçao que executa ate chegar num p menor que o final
    if (p < r - 1) {
        // Vamos fixar o q no meio do vetor.
        q = (p + r) / 2;
        mergesort(p, q, v, op);     // vetor começo meio.
        mergesort(q, r, v, op);     // vetor meio final.
        intercala(p, q, r, v, op);  // vetor meio final.
    }
}
// Funcao que ordena os estudantes baseado na opcao op
void ordenaEstudantes(Estudante v[], int n, char op){
    // Chamar o mergesort (adaptado).
    mergesort(0, n, v, op);
    //Nao retorna nada
}
//Funcao que busca o estudante pelo RGA.
int buscaRGA(Estudante v[], int n, int RGA){
    // Devolve o indice de onde o estudante se encontra
    // Se for encontrado devolve i se nao devolve -1.
    int comec = 0;
    int fim = n - 1;
    while (comec <= fim) {  
        int i = (comec + fim) / 2;  
        if (v[i].RGA == RGA) {  
            return i;
        }
        if (v[i].RGA < RGA) {  
            comec = i + 1;
        } else {  
            fim = i;
        }
    }
    return -1;
}

// Funcao que imprimi apenas um estudante.
void imprimeEstudante(Estudante v[], int k){
    if(k >= 0){
        //Imprimir o estudante.
        printf("RGA: %d\n", v[k].RGA);
        printf("Nome: %s\n", v[k].nome);
        printf("Media: %.2lf\n", v[k].media);
        printf("------------\n");
    } else {
        // Se o numero for menor que 0 (no nosso caso = -1)
        printf("RGA: null\n");
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
// Funcao principal.
int main(){
    //////////////////////////////////////////////
    /////////// ARQUIVO A SER LIDO ///////////////
    // Indicar indereço de arquivo. //////////////
    FILE *p; /////////////////////////////////////
    //Receber arquivo com as entradas ////////////
    p = fopen("entradas_RGA.txt","r"); ///////////
    //////////////////////////////////////////////
    int n, i;
    Estudante estudantes[10000];
    fscanf(p, "%d", &n);
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

    // Recrutando ordenaEstudantes
    ordenaEstudantes(estudantes, n, op);
    // Fazer busca.
    for(int i = 0; i < c_num; i++) {
        if(op == 'r'){
            int RGA;
            fscanf(p,"%d", &RGA);
            imprimeEstudante(estudantes, buscaRGA(estudantes, n, RGA));
        }
    }
    //Imprimir estudantes ordenados.
    imprimeEstudantes(estudantes, i);

    return 0;

}

// //Funcao que busca o estudante pelo NOME.
// int buscaNome(Estudante v[], int n, char nome[]){
//     // Devolve o indice de onde o estudante se encontra
//     // Se for encontrado devolve i se nao devolve -1.
//     return 0;
// }


// // Funcao que busca o estudante pela media.
// int buscaMedia(Estudante v[], int n, double media){
//     // Devolve o indice de onde o estudante se encontra.
//     // Se for encontrado devolve i se nao devolve -1.
//     int comec = 0;
//     int fim = n - 1;
//     while (comec <= fim) {  
//         int i = (comec + fim) / 2;  
//         if (v[i].media == media) {  
//             return i;
//         }
//         if (v[i].media < media) {  
//             comec = i + 1;
//         } else {  
//             fim = i;
//         }
//     }
//     return -1;
