#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    // Verifica se o número é 0 ou 1, que sempre pertencem à sequência
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    // Verifica se o número informado é igual a algum número da sequência
    if (c == num || num == 0) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }
}