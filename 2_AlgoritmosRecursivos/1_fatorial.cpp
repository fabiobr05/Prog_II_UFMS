/* -*- coding: utf-8 -*-
"""
Created on Wed May 26 19:35:13 2021

@author: Fabio Batista Rodrigues
"""
*/
// Problema: Dado um número inteiro n > 0, computar o fatorial n!.
//Usamos uma fórmula que nos permite naturalmente escrever uma
// função recusiva para calcular n!:
/*
n! = {1 se n<= 1 e n*(n-1) caso o contrario
*/
// Solucao

/* Recebe um número inteiro n >= 0 e devolve o fatorial de n */
int fat(int n) {
    int result;
    if (n <= 1)
        result = 1;
    else{
        result = n * fat(n-1);
    }
    return result;
}

// Podemos fazer de outra forma, como:
/* Recebe um número inteiro n >= 0 e devolve o fatorial de n */
int fat(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * fat(n-1);
    }
    
}