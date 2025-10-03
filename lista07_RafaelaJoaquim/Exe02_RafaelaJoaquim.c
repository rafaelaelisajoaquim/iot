#include <stdio.h>
#include <string.h>

int main() {
    char modelos[5][20]; 
    float consumo[5];  
    int i, maisEconomico = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o modelo do veiculo %d: ", i + 1);
        scanf("%s", modelos[i]); 

        printf("Digite quantos kilometros por litro que o veiculo %d faz: ", i + 1);
        scanf("%f", &consumo[i]);

        float litros = 1000 / consumo[i];
        printf("O veiculo %s consome %.2f litro(s) de combustivel para percorrer 1000km\n\n", modelos[i], litros);
    }

    for (i = 1; i < 5; i++) {
        if (consumo[i] > consumo[maisEconomico]) {
            maisEconomico = i;
        }
    }

    printf("O veiculo mais economico e o %s.\n", modelos[maisEconomico]);
    printf("\n Rafaela Elisa Joaquim.");

    return 0;
}
