#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int numero;
		printf("Digite um numero qualquer\n");
	scanf("%d", &numero);
		if(numero<0)
			printf("Numero menor que 0");
		else if (numero<10)
			prinf("Numero >=0 e <10");
		else if (numero<100)
			printf("Numero >=10 e <100");
		else
			printf("Numero >=100");
	}