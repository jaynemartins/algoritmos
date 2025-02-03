#include <stdio.h>

	float km_l, tempo_gasto, veloc_media; // variaveis de entrada
	float dist_perc, litros_usados; // variaveis de processamento e saida
main(){
	//entrada de dados
	printf("Informe o nro de Quilometros Por Litro: ");
	scanf("%f", &km_l);
	printf("Informe o tempo gasto na viagem: ");
	scanf("%f", &tempo_gasto);
	printf("Informe a velocidade media: ");
	scanf("%f", &veloc_media);
	//processamento - calculo dos valores  conforme as formulas
	dist_perc = tempo_gasto*veloc_media;
	litros_usados = dist_perc/km_l;
	//saida
	printf("\n\n***RELATORIO FINAL***\n\n");
	printf("\n Velocidade Media: %f", veloc_media);
	printf("\n Tempo Gasto: %f", tempo_gasto);
	printf("\n Distancia Percorrida: %f", dist_perc);
	printf("\n Litros Usados: %f", litros_usados);
}
