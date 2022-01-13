# include <cstdio>
# include <cmath>

// Funçao piso_log
int piso_log2(int n){
    int result;
    result = log2(n);
    return result ;
}

// Funçao principal.
int main() {
 
    int n;
    scanf("%d", &n);

    printf("%d", piso_log2(n));

    return 0;
}


