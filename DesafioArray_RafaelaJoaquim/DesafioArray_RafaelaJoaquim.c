#include <stdio.h>

int main() {
    float preco[10];     
    int quantidade[10]; 
    float totalObj[10];    
    float totalVendas = 0;
    float salarioBase = 545.00;
    float comissao, salarioFinal;
    int i, maisVendido = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o preco unitario do objeto %d: ", i + 1);
        scanf("%f", &preco[i]);

        printf("Digite a quantidade vendida do objeto %d: ", i + 1);
        scanf("%d", &quantidade[i]);

        totalObj[i] = preco[i] * quantidade[i]; 
        totalVendas += totalObj[i];             
        printf("\n");
    }

    for (i = 0; i < 10; i++) {
        printf("Objeto %d = Quantidade: %d | Preco= R$ %.2f | Total: R$ %.2f\n",
               i + 1, quantidade[i], preco[i], totalObj[i]);

        if (quantidade[i] > quantidade[maisVendido]) {
            maisVendido = i;
        }
    }

    comissao = totalVendas * 0.05;
    salarioFinal = salarioBase + comissao;

    printf("\nValor total das vendas: R$ %.2f\n", totalVendas);
    printf("Comissao (5%%): R$ %.2f\n", comissao);
    printf("Salario final do vendedor: R$ %.2f\n", salarioFinal);

    printf("\nO objeto mais vendido foi o da posicao %d, com %d unidades.\n",
           maisVendido + 1, quantidade[maisVendido]);
           
    printf("\nRafaela Elisa Joaquim\n");

    return 0;
}
