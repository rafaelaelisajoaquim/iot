#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int num1, num2, num3;
		printf("Digite um valor qualquer:\n");
	scanf("%d", &num1);
			printf("Digite o valor numero:\n");
	scanf("%d", &num2);
			printf("Digite o terceiro valor:\n");
	scanf("%d", &num3);
		if(num1>num2 && num1>num3)
			printf("O maior numero eh: %d", num1);
		else if (num2>num1 && num2>num3)
			printf("O maior numero eh: %d", num2);
		else
			printf("O maior numero eh: %d", num3);
	}