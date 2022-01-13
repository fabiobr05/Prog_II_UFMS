#include <cstdio>

void troca(int &a, int &b) {
  char aux = a;
  a = b;
  b = aux;
}

int separa(int p, int r, int c[]) {
    int pivo = c[r];
    int q = p;
    for(int i = p ; i < r ; i++) {
        if (c[i] <= pivo){
            troca(c[i], c[q]);
            q++;
        }
    }
    troca(c[q], c[r]);
    return q, pivo;
}

int main() {

    int n, i;
    int r;
    scanf("%d",&n);
    int v[1000];
    for(i = 0;i < n;i++){
        scanf("%d",&v[i]);
    }

    int x, y = separa(0,n, v);

    printf("%d",y);

    return 0;
}