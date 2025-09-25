#include <stdio.h>

int main() {
	int num1, num2;
		printf("Digite um numero qualquer:\n");
	scanf("%d", &num1);
			printf("Digite outro numero qualquer:\n");
	scanf("%d", &num2);
		if(num1<num2)
			printf("Numeros em ordem: %d, %d", num1, num2);
		else
			printf("Numeros em ordem: %d, %d", num2, num1);
}