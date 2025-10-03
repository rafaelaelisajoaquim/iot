#include <stdio.h>

int main() {
    int vetor[10];
    int i, encontrou = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros maiores que 50 digitados:\n");
    for (i = 0; i < 10; i++) {
        if (vetor[i] > 50) {
            printf("Valor: %d | Posicao: %d\n", vetor[i], i);
            encontrou = 1;
        }
    }
    if (!encontrou) {
    	printf("Nenhum numero acima de 50 foi digitado\n");
    		    printf("\n Rafaela Elisa Joaquim.");
	}
}
