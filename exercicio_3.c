#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h"



#define TAM 30

int main() {
    char *json_data = "{\"faturamento\": [100.5, 200.3, 0, 150.2, 250.0, 0, 300.4, 0, 400.0, 350.0, 0, 0, 100.0, 200.0, 300.0, 400.0, 500.0, 600.0, 700.0, 800.0, 900.0, 0, 0, 0, 50.0, 60.0, 0, 70.0, 80.0, 0]}";
    double faturamento[TAM];
    int i, dias_com_faturamento = 0;
    double maior, menor, soma = 0.0, media_mensal;

    cJSON *json = cJSON_Parse(json_data);
    cJSON *json_faturamento = cJSON_GetObjectItem(json, "faturamento");

    if (!cJSON_IsArray(json_faturamento)) {
        printf("Erro ao ler o faturamento.\n");
        return 1;
    }

    for (i = 0; i < cJSON_GetArraySize(json_faturamento); i++) {
        faturamento[i] = cJSON_GetArrayItem(json_faturamento, i)->valuedouble;
        if (faturamento[i] > 0) {
            soma += faturamento[i];
            dias_com_faturamento++;
            if (dias_com_faturamento == 1 || faturamento[i] < menor) {
                menor = faturamento[i];
            }
            if (dias_com_faturamento == 1 || faturamento[i] > maior) {
                maior = faturamento[i];
            }
        }
    }

    media_mensal = soma / dias_com_faturamento;
    int dias_acima_da_media = 0;

    for (i = 0; i < TAM; i++) {
        if (faturamento[i] > media_mensal) {
            dias_acima_da_media++;
        }
    }

    printf("Menor valor de faturamento: %.2f\n", menor);
    printf("Maior valor de faturamento: %.2f\n", maior);
    printf("Número de dias com faturamento superior à média: %d\n", dias_acima_da_media);

    cJSON_Delete(json);

    return 0;
}


//gcc -Wall -Wextra -g3 cJSON.c exercicio_3.c -o output/exercicio_3.exe
//./output/exercicio_3.exe
