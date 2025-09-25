#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int idade;
		printf("Digite sua idade:\n");
	scanf("%d", &idade);
		if(idade<=11)
			printf("Voce eh crianca");
		else if(idade<=18)
			printf("Voce eh adolecente");
		else if(idade<=24)
			printf("Voce eh jovem");
		else if(idade<=59)
			printf("Voce eh adulto");
		else
			printf("Voce eh idoso");
	}