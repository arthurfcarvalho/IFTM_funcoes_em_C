#include <stdio.h>

void div(int n){

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){

    int n;

    scanf("%d", &n);

    div(n);

    return 0;
}
