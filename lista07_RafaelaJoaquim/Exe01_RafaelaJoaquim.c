#include <stdio.h>

int primo(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int vetor[9];
    int i;

    printf("Digite 9 numeros inteiros:\n");
    for (i = 0; i < 9; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros primos digitados:\n");
    for (i = 0; i < 9; i++) {
        if (primo(vetor[i]) == 1) {
            printf("Valor: %d | Posicao: %d\n", vetor[i], i);
        }
    }
    printf("\n Rafaela Elisa Joaquim.");
}
