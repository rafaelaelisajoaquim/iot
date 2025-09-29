#include <stdio.h>
#include <locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	float sal, novosal;
	//mostra mensagem antes da leitura do salário
	printf("\nDigite o salario do funcionario: ");
	//recebe o salário
	scanf("%f%*c", &sal);
	//calcula novo salario
	novosal=sal+sal*25/100;
	//mostra o novo sal
	printf("\nNovo salario = %0.2f",novosal);
	getchar();
	return 0;
}