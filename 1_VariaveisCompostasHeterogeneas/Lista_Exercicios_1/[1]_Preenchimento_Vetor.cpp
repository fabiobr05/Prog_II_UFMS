
# include <cstdio>

int main() {
    
    float X, N;
    int i;

    scanf("%f", &X);

    printf("%.4f\n",X);
    N = 0;
    for(i = 0; i < 20; i++){

        printf("N[%d] = %.4f\n", i, X);

        X = X/2;
        
    }

return 0;

}