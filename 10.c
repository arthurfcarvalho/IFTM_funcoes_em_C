#include <stdio.h>

int soma(int a, int b){

    int s;

    for(a+1; a < b; a++){
        if(a % 2 == 0){
            s += a;
        }
    }

    return s;
}

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", soma(a, b));

    return 0;
}
