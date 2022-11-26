#include <stdio.h>

double soma(int p, int u, int n){

    double soma = (n * (p + u)) / 2;

    return soma;
}

int main(){

    int primeiro, ultimo, n;

    scanf("%d %d %d", &primeiro, &ultimo, &n);

    printf("%lf\n", soma(primeiro, ultimo, n));

    return 0;
}
