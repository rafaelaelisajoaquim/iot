#include <stdio.h>

int main() {
    int l, c, maior, m[2][2], r[2][2];
    
    printf("Digite o valor dos elementos da matriz:\n");
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("Elemento [%d][%d]: ", l+1, c+1);
            scanf("%d", &m[l][c]);
        }
    }

    maior = m[0][0];
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            if (m[l][c] > maior) {
                maior = m[l][c];
            }
        }
    }

    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) { 
            r[l][c] = m[l][c] * maior;
        }
    }

    printf("\nMatriz resultante:");
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) { 
            printf("%4d", r[l][c]);
        }
    }

   printf("\nRafaela Elisa Joaquim.");
}
