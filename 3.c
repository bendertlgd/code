#include <stdio.h>
#define PI 3.14159
#define custAlum 100.00
int main(){
    double raio,altura,aCirc,custoLata,aLater,custoTotal,aTotal;
    scanf("%lf",&raio);
    scanf("%lf",&altura);
    aCirc = PI * (raio * raio);  
    aLater = 2 * PI * raio * altura;
    aTotal = 2 * aCirc + aLater;
    custoTotal = aTotal * custAlum;
    printf("O VALOR DO CUSTO E = %.2lf\n",custoTotal);
    return 0; 

}