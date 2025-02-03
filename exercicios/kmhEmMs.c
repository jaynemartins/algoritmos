#include <stdio.h>

	float km_h; // variaveis de entrada
	float met_seg; // variaveis de processamento e saida
main(){
	//entrada de dados
	printf("Informe o nro de Quilometros Por Hora: ");
	scanf("%f", &km_h);
		//processamento - calculo dos valores  conforme as formulas
	met_seg = km_h/3.6; //3,6 porque uma hora tem 3600 segundos 
		//saida
	printf("\n\n***RELATORIO FINAL***\n\n");
	printf("\n Velocidade Em Metros por Segundo: %f", met_seg);
	
}
