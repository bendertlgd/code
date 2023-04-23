#include <stdio.h>

int main() {
    double salario_minimo, consumo_kW, custo_kW, custo_consumo, custo_desconto;

    // leitura dos valores de entrada

    scanf("%lf", &salario_minimo);

  
    scanf("%lf", &consumo_kW);

    // cálculo dos custos
    custo_kW = salario_minimo / 100;
    custo_consumo = consumo_kW * custo_kW;
    custo_desconto = custo_consumo * 0.9;

    // impressão dos resultados
    printf("Custo kW: R$ %.2lf\n", custo_kW);
    printf("Custo do consumo: R$ %.2lf\n", custo_consumo);
    printf("Custo com desconto: R$ %.2lf\n", custo_desconto);

    return 0;
}
