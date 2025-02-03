#include <stdio.h>

int main() {
    int num, a, b, c, d;
    
    // Solicita um número de três algarismos ao usuário
    printf("Digite um numero de três algarismos: ");
    scanf("%d", &num);
    
    // Garante que o número tem três algarismos
    if (num < 100 || num > 999) {
        printf("Numero invalido! Deve ter exatamente três algarismos.\n");
        return 1;
    }
    
    // Separa os algarismos
    a = num / 100;       // Primeiro algarismo
    b = (num / 10) % 10; // Segundo algarismo
    c = num % 10;        // Terceiro algarismo
    
    // Calcula o dígito verificador
    d = (a + b * 3 + c * 5) % 7;
    
    // Exibe o número resultante
    printf("O numero de quatro algarismos e: %d%d%d%d\n", a, b, c, d);
    
    return 0;
}
