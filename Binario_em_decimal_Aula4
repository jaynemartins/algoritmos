#include <stdio.h>
#include <math.h>

int main() {
    int num, decimal = 0, digit, i = 0, temp;
    
    // Solicita um número binário de cinco dígitos ao usuário
    printf("Digite um numero binario de cinco digitos: ");
    scanf("%d", &num);
    
    // Verifica se o número tem exatamente cinco dígitos binários
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        if (digit != 0 && digit != 1) {
            printf("Numero invalido! Deve conter apenas 0s e 1s.\n");
            return 1;
        }
        temp /= 10;
    }
    
    if (num < 10000 || num > 11111) {
        printf("Numero invalido! Deve ter exatamente cinco digitos binarios.\n");
        return 1;
    }
    
    // Converte o número binário para decimal
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        decimal += digit * pow(2, i);
        temp /= 10;
        i++;
    }
    
    // Exibe o número decimal equivalente
    printf("O equivalente decimal eh: %d\n", decimal);
    
    return 0;
}

