#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int ano = 2021, anoAtual;
	float salario = 1000.0;
	float percentual = 1.5;
	
	printf ("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	while (ano <= anoAtual) {
		salario+=(salario * percentual/100);
		percentual *= 2;
		ano++;
	}
	printf("\n Novo salario: %.2f\n", salario);
}