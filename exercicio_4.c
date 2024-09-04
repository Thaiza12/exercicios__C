#include <stdio.h>

int main() {

  float estado_sp = (67836.43f);
  float estado_rj = 36678.66f;
  float estado_mg =29229.88f;
  float estado_es = 27165.48f;
  float outros_estados = 19849.53f;
  float total= (estado_sp + estado_rj + estado_mg +estado_es + outros_estados);

 // printf("O toltal dos valores é %.2f", total);

  estado_sp = ((estado_sp / total) * 100);
  estado_rj = ((estado_rj / total) * 100); 
  estado_mg = ((estado_mg / total) * 100);
  estado_es = ((estado_es / total) * 100);
  outros_estados = ((outros_estados / total) *100);

  printf("A porcentagem de SP é %.2f%% \n", estado_sp);
  printf("A porcentagem de RJ é %.2f%% \n", estado_rj);
  printf("A porcentagem de mg é %.2f%% \n", estado_mg);
  printf("A porcentagem de ES é %.2f%% \n", estado_es);
  printf("A porcentagem dos outros estados é %.2f%% \n", outros_estados);

  return 0; 
}