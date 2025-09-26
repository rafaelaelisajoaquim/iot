#include <stdio.h>

int main() {
	float salario = 1000.0;
	float percentual = 1.5;
	int ano;
	
	printf("Ano 2018 => R$ %.2f\n", salario);
	
	for(ano=2019; ano <=2025; ano++) {
		salario += salario * (percentual/100);
		printf("Ano => %d percentual = %.1f%  | salario: R$%.2f%\n", ano , percentual, salario);
		
		percentual *= 2;
	}
	printf("\nSalario atual: R$%.2f", salario);
}