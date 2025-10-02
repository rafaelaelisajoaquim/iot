#include <stdio.h>
#include <string.h>

int main() {
	char modelos[5][20];
	float consumo[5];
	int i, maisEconomico = 0;
	
	printf("Cadastro de 5 carros: \n");
	for (i=0; i<5; i++) {
		printf("\n Digite o modelo do carro %d:", i + 1);
		scanf("%s", modelos[i]);
	}
}