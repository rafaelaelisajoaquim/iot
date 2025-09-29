#include <stdio.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	float salb, salt, grat, imp;
	
	printf("\nDigite o salario do funcionario: ");
	//recebe o salário
	scanf("%f%*c", & salb);
	
	
	//calcula salario a receber
	imp=salb*7/100;
	grat=salb*5/100;
	salt= salb + grat + imp;

	//mostra o novo sal
	printf("\nValor da gratificacao = %0.2f",grat);
	printf("\nValor do imposto = %0.2f",imp);
	printf("\nNovo salario = %0.2f",salt);
	
	getchar();
	return 0;
}