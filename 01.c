#include <stdio.h>

double delta(double a, double b, double c){
    double delta = (b*b) - (4 * a * c);
    return delta;
}

int main(){

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Delta = %.2lf", delta(a, b, c));

    return 0;
}
