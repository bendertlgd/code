#include <stdio.h>
int main(){
    double A,B,C,delta;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    delta = B * B - 4 * A * C;
    printf("O VALOR DE DELTA E = %.2lf",delta);
    return 0;
}