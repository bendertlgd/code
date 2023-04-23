#include <stdio.h>

int main() {
    double fahrenheit, polegadas, celsius, milimetros;

    // printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // printf("Digite a quantidade de chuva em polegadas: ");
    scanf("%lf", &polegadas);

    celsius = (fahrenheit - 32) * 5/9;
    milimetros = polegadas * 25.4;

    printf("O VALOR EM CELSIUS = %.2lf\n", celsius);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", milimetros);

    return 0;
}