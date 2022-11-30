#include <stdio.h>

double juros(double t, double c, int m){

    return c * m * (t/100);

}

int main(){

    double t, c;
    int m;

    scanf("%lf %lf", &t, &c);
    scanf("%d", &m);

    printf("%.2lf\n", juros(t, c, m));

    return 0;
}
