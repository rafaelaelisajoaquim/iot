#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int X=0;
	while (X !=5 );
	{
		printf("Valor de X = %d \n", X);
		X = X + 1;
	}
	printf("\n Valor de X depois que sair da estrutura = %d", X)
}