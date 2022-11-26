#include <stdio.h>

double retornar(double x, double y){

    if(x > y){
        return x;
    }
    else if(y > x){
        return y;
    }
}

int main(){

    double x, y;

    scanf("%lf %lf", &x, &y);

    printf("%lf\n", retornar(x, y));

    return 0;
}
