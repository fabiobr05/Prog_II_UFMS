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
    char nome[100]; // Definir o campo nome.
    double media;   // Definir o campo media.
};

// Funcao que imprimi apenas um estudante.
void imprimiEstudante(Estudante v[], int k){
    //Imprimir o estudante.
    printf("RGA: %d\n", v[k].RGA);
    printf("Nome: %s\n", v[k].nome);
    printf("Media %.2lf\n", v[k].media);
    printf("------------\n");
}
// Funcao que imprimi todos os estudantes com ordenacao.
void imprimeEstudantes(Estudante v[], int n){
    
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
        char nome[100]; // Definir o campo nome.//
    }; ///////////////////////////////////////////
    pessoa nomes[500]; ///////////////////////////
    //////////////////////////////////////////////
    for(int i = 0; i < c_num; i++) {
        fscanf(p," %[^\n]s", nomes[i].nome);
    }
    // SAIDA DE DADOS.
    for(i = 0; i < n; i++){
        imprimiEstudante(estudantes, i);
    }
    





    // esperar uma variavel para fechar a janela.
    char nao_feche;
    scanf(" %c", &nao_feche);
    ////////////////////////////////
    ///// Fecha o arquvio lido /////
    fclose(p);//////////////////////
    // Retornar valor a funçao principal.
    return 0;
}