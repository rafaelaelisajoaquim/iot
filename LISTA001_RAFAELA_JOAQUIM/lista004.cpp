#include <math.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float total,nota1,nota2,nota3,nota4;

    printf("\nDigite o valor UM: ");
    scanf("%f%*c", & nota1);
    
    printf("\nDigite o valor DOIS: ");
    scanf("%f%*c", & nota2);
    
    printf("\nDigite o valor TRES: ");
    scanf("%f%*c", & nota3);
    
    printf("\nDigite o valor QUATRO: ");
    scanf("%f%*c", & nota4);
    
    total = nota1 + nota2 + nota3 + nota4;

    // Exibe o resultado
 	printf("\nA soma dos valores e: = %0.2f", total);

    return 0;
}
