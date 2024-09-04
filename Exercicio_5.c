
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverteFrase() {
  char frase;
  scanf("%c", &frase);

  if(frase != '\n'){
    inverteFrase();
    printf("%c", frase);

}
}

int main() {

  printf("Digite uma frase:");
  inverteFrase();


  return 0;
}