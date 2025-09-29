#include <stdio.h>

int main() {
    float preco, imposto, custoEstocagem, precoFinal;
    char refrig, categoria;
    int i = 1;

    float somaAdicionais = 0, totalImpostos = 0;
    float maiorPreco = 0, menorPreco = 0;
    int qtdBarato = 0, qtdNormal = 0, qtdCaro = 0;

    while (i <= 12) {
        printf("\nProduto %d:\n", i);
        printf("Digite o preco unitario: ");
        scanf("%f", &preco);

        printf("Digite a refrigeracao (S/N): ");
        scanf(" %c", &refrig);

        printf("Digite a categoria (A - alimentacao, L - limpeza, V - vestuario): ");
        scanf(" %c", &categoria);

        if (preco <= 20) {
            if (categoria == 'A') custoEstocagem = 2;
            else if (categoria == 'L') custoEstocagem = 3;
            else custoEstocagem = 4;
        }
        else if (preco <= 50) {
            if (categoria == 'A') custoEstocagem = 6;
            else custoEstocagem = 0;
        }
        else { 
            if (refrig == 'S') custoEstocagem = 5;
            else if (categoria == 'A' || categoria == 'V') custoEstocagem = 1;
            else custoEstocagem = 0;
        }

        if (categoria == 'A' && refrig == 'S')
            imposto = preco * 0.04;
        else
            imposto = preco * 0.02;

        precoFinal = preco + custoEstocagem + imposto;

        if (precoFinal <= 20) {
            qtdBarato++;
            printf("Classificacao: Barato\n");
        }
        else if (precoFinal <= 100) {
            qtdNormal++;
            printf("Classificacao: Normal\n");
        }
        else {
            qtdCaro++;
            printf("Classificacao: Caro\n");
        }

        somaAdicionais += (custoEstocagem + imposto);
        totalImpostos += imposto;

        if (i == 1) {
            maiorPreco = menorPreco = precoFinal;
        } else {
            if (precoFinal > maiorPreco) maiorPreco = precoFinal;
            if (precoFinal < menorPreco) menorPreco = precoFinal;
        }

        printf("Preco unitario: %.2f\n", preco);
        printf("Custo de estocagem: %.2f\n", custoEstocagem);
        printf("Imposto: %.2f\n", imposto);
        printf("Preco final: %.2f\n", precoFinal);

        i++; 
    }
    printf("Media dos valores adicionais (estocagem + imposto): %.2f\n", somaAdicionais / 12);
    printf("Maior preco final: %.2f\n", maiorPreco);
    printf("Menor preco final: %.2f\n", menorPreco);
    printf("Total dos impostos: %.2f\n", totalImpostos);
    printf("Quantidade de produtos Barato: %d\n", qtdBarato);
    printf("Quantidade de produtos Normal: %d\n", qtdNormal);
    printf("Quantidade de produtos Caro: %d\n", qtdCaro);

    return 0;
}
