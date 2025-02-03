#include<stdio.h>

char nome_aluno[50];
float nota1, nota2;

main(){
	
	printf("Calculo da media final, Informe o nome e notas do aluno com precisao de 0.1 (1 decimo). P.e. 5.5;6.5;7.1 \n\n\n");
	
	printf("Informe o Nome...................");
	scanf("%s", nome_aluno);
	printf("\nInforme a Nota 1.................");
	scanf("%f", &nota1);
	printf("\nInforme a Nota 2.................");
	scanf("%f", &nota2);
	printf("A media final do aluno %s eh.....%f", nome_aluno, (nota1 + nota2)/2);

}
