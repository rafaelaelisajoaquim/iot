#include <stdio.h>

int main() {
    int opcao;
    float salario, imposto, novo_salario;

    printf("Opcoes:\n");
    printf("1. Imposto\n");
    printf("2. Novo salario\n");
    printf("3. Classificacao\n");
    printf("Digite a opcao que deseja: ");
    scanf("%d", &opcao);

    printf("Digite o salario: ");
    scanf("%f", &salario);

    switch (opcao) {
        case 1:
            if (salario < 500) {
                imposto = salario * 0.05;
            } else if (salario <= 850) {
                imposto = salario * 0.10;
            } else {
                imposto = salario * 0.15;
            }
            printf("Valor do imposto: R$ %.2f\n", imposto);
        break;

        case 2:
            if (salario > 1500) {
                novo_salario = salario + 25;
            } else if (salario >= 750) {
                novo_salario = salario + 50;
            } else if (salario >= 450) {
                novo_salario = salario + 75;
            } else {
                novo_salario = salario + 100;
            }
            printf("Novo salario: R$ %.2f\n", novo_salario);
        break;

        case 3: 
            if (salario <= 700) {
                printf("Classificacao: Mal remunerado\n");
            } else {
                printf("Classificacao: Bem remunerado\n");
            }
        break;
    }
}
