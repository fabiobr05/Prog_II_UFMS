#include <cstdio>
#include <cmath>
int piso_log2(int n) {
    if(n<=2) {
        return 1;
    } else {
        return piso_log2(n/2)+1;
    }
}



int main() {

    int n;
    int result;

    scanf("%d", &n);

    result = piso_log2(n);


    printf("%d", result);

    return 0;
}