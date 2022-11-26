#include <stdio.h>

void imprime(int n){
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
}

int main(){

    int n;

    scanf("%d", &n);

    printf("\n");

    imprime(n);

    return 0;
}
