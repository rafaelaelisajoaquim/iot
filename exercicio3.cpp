#include <stdio.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	float dep, jur, vlrrend, vlrtot;
	
	printf("\nDigite o valor do deposito: ");
	//recebe o deposito
	scanf("%f%*c", & dep);
	
	printf("\nDigite o valor dos juros (em %): ");
	//recebe o juros
	scanf("%f%*c", & jur);
	
	//calculo
 	vlrrend = dep * jur / 100;
 	vlrtot = dep + vlrrend;

	//mostra o novo sal
	printf("\nValor do rendimento = %0.2f", vlrrend);
	printf("\nValor total = %0.2f", vlrtot);
	
	getchar();
	return 0;
}