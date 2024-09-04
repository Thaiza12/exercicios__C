#include <stdio.h>
#include <stdlib.h>


int main() {
  int indice = 13;
  int soma = 0;
  int k = 0;

  while (k < indice) {
    k = k + 1;
    soma = soma + k;
  }
  printf("O valor da variável soma é: %d\n", soma);

  return 0;
}
