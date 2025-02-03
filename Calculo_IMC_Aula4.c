#include <stdio.h>

int main() {
    float peso, altura, imc;
    
    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);
    
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);
    
    if (imc < 17) {
        printf("Voce esta muito abaixo do peso\n");
    } else if (imc >= 17 && imc <= 18.49) {
        printf("Voce esta abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.99) {
        printf("Voce esta com o peso normal\n");
    } else if (imc >= 25 && imc <= 29.99) {
        printf("Voce esta acima do peso\n");
    } else if (imc >= 30 && imc <= 34.99) {
        printf("Voce esta com obesidade I\n");
    } else if (imc >= 35 && imc <= 39.99) {
        printf("Voce esta com obesidade II (Severa)\n");
    } else {
        printf("Voce esta com obesidade III (Mórbida)\n");
    }
}
