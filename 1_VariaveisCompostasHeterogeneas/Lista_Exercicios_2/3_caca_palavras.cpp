#include <cstdio>

int main() {
    int nLinhas, nColunas;
    int nPalavras;
    scanf("%d %d", &nLinhas, &nColunas);

    char matrizA[nLinhas][nColunas];
    char matrizB[nLinhas][nColunas];
//iterando a matriz A e B//
    for (int linha = 0; linha < nLinhas; linha++) {
        for (int coluna = 0; coluna < nColunas; coluna++) {
            scanf(" %c", &matrizA[linha][coluna]);
        }
    }
    for (int linha = 0; linha < nLinhas; linha++) {
        for (int coluna = 0; coluna < nColunas; coluna++) {
            matrizB[linha][coluna] = '.';
        }
    }
    //recebendo quantidade de palavras//
    scanf("%d", &nPalavras);

    char palavra[nPalavras][15];
    int i = 0;
    for (i = 0; i < nPalavras; i++) {
        scanf("%s", &palavra[i]);
    }

    //buscar palavra na horizontal//
    for (i = 0; i < nPalavras; i++) {
        int nLinha = 0;
        int posicaoCaracter = 0;
        for (nLinha = 0; nLinha < nLinhas; nLinha++) {
            for (int nColuna = 0; nColuna < nColunas; nColuna++) {
                if (matrizA[nLinha][nColuna] == palavra[i][posicaoCaracter]) {
                    matrizB[nLinha][nColuna] = palavra[i][posicaoCaracter];
                    posicaoCaracter++;
                }
            }
        }
        if (posicaoCaracter < 3) {
            int posicaoCaracter = 0;
            for (nLinha = 0; nLinha < nLinhas; nLinha++) {
                for (int nColuna = nColunas; nColuna >= 0; nColuna--) {
                    if (matrizA[nLinha][nColuna] == palavra[i][posicaoCaracter]) {
                        matrizB[nLinha][nColuna] = palavra[i][posicaoCaracter];
                        posicaoCaracter++;
                    }
                }
            }
        }
    }
    //buscar palavra na vertical//
    for (i = 0; i < nPalavras; i++) {
        int nColuna = 0;
        int posicaoCaracter = 0;
        for (nColuna = 0; nColuna < nColunas; nColuna++) {
            for (int nLinha = 0; nLinha < nLinhas; nLinha++) {
                if (matrizA[nLinha][nColuna] == palavra[i][posicaoCaracter]) {
                    matrizB[nLinha][nColuna] = palavra[i][posicaoCaracter];
                    posicaoCaracter++;
                }
            }
        }
        if (posicaoCaracter < 3) {
            int posicaoCaracter = 0;
            for (nColuna = 0; nColuna < nColunas; nColuna++) {
                for (int nLinha = nLinhas; nLinha >= 0; nLinha--) {
                    if (matrizA[nLinha][nColuna] == palavra[i][posicaoCaracter]) {
                        matrizB[nLinha][nColuna] = palavra[i][posicaoCaracter];
                        posicaoCaracter++;
                    }
                }
            }
        }
    }
    //buscar diagonal//
    for (i = 0; i < nPalavras; i++) {
        int nColuna = 0;
        int posicaoCaracter = 0;
        for (int nLinha = 0; nLinha < nLinhas; nLinha++) {
            if (matrizA[nLinha][nColuna] == palavra[i][posicaoCaracter]) {
                matrizB[nLinha][nColuna] = palavra[i][posicaoCaracter];
                posicaoCaracter++;
                nColuna++;
            }
        }
        if (posicaoCaracter < 3) {
            int posicaoCaracter = 0;
            for (int nLinha = 0; nLinha < nLinhas; nLinha++) {
                for (int nLinha = nLinhas; nLinha >= 0; nLinha--) {
                    if (matrizA[nLinha][nColuna] == palavra[i][posicaoCaracter]) {
                        matrizB[nLinha][nColuna] = palavra[i][posicaoCaracter];
                        posicaoCaracter++;
                        nColuna++;
                    }
                }
            }
        }
    }
    for(int i = 0 ; i < nLinhas ; i++) {
        for (int j = 0 ; j < nColunas ; j++) {
            printf("%c ", matrizB[i][j]);
        }
        printf("\n");
    }
    return 0;
}