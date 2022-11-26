#include <stdio.h>

int pares(int a, int b, int c){

    int i = 0;

    if(a % 2 == 0){
        i++;
    }
    if(b % 2 == 0){
        i++;
    }
    if(c % 2 == 0){
        i++;
    }

    return i;
}

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", pares(a, b, c));

    return 0;
}
