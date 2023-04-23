#include <stdio.h>
#include <math.h>
int main(){
    double h,a,ab,v;
    scanf("%lf %lf",&h,&a);

    ab = 3 * pow(a,2)*sqrt(3)/2;
    v = 1.0/3 * ab * h;
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS",v);
    return 0;
}