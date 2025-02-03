#include <stdio.h>

int main() {
    // Declaração de variáveis
    float h_trab, vlr_hora, perc_desc; // Variáveis de Entrada
    float sal_bruto, vlr_desc, sal_liq; // Variáveis de Processamento e Saída

    // Entrada de Dados
    printf("Informe o numero de Horas Trabalhadas: ");
    scanf("%f", &h_trab);
    printf("Informe o Valor da Hora Trabalhada: ");
    scanf("%f", &vlr_hora);
    printf("Informe o percentual de Desconto: ");
    scanf("%f", &perc_desc);

    // Processamento - Cálculo dos valores conforme fórmulas
    sal_bruto = h_trab * vlr_hora;
    vlr_desc = sal_bruto * (perc_desc / 100);
    sal_liq = sal_bruto - vlr_desc;

    // Saída
    printf("\n\n *** RELATORIO *** \n\n");
    printf("\n Horas Trabalhadas: %.2f", h_trab);
    printf("\n Salario Bruto: %.2f", sal_bruto);
    printf("\n Valor de Descontos: %.2f", vlr_desc);
    printf("\n Salario Liquido: %.2f\n", sal_liq);

    return 0;
}
