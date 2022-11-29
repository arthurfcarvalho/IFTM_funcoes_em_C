#include <stdio.h>

int soma(int a, int b, int c){

    int maior = a, menor = a;

    if(a > b && a > c){
        maior = a;
    }
    else if(b > a && b > c){
        maior = b;
    }
    else if(c > a && c > b){
        maior = c;
    }

    if(a < b && a < c){
        menor = a;
    }
    else if(b < a && b < c){
        menor = b;
    }
    else if(c < a && c < b){
        menor = c;
    }

    return maior + menor;

}

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", soma(a, b, c));

    return 0;
}
