#include <math.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, peso1, peso2, peso3, somaPesos, somaProdutos, mediaPonderada;

	printf("\nDigite nota UM: ");
    scanf("%f%*c", & nota1);
    
    printf("\nDigite peso UM: ");
    scanf("%f%*c", & peso1);
    
    printf("\nDigite nota DOIS: ");
    scanf("%f%*c", & nota2);
    
    printf("\nDigite peso DOIS: ");
    scanf("%f%*c", & peso2);
    
    printf("\nDigite nota TRES: ");
    scanf("%f%*c", & nota3);
    
    printf("\nDigite peso TRES: ");
    scanf("%f%*c", & peso3);

    // Exibe o resultado
    somaPesos = peso1 + peso2 + peso3;
    somaProdutos = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
    mediaPonderada = somaProdutos / somaPesos;
    
    printf("\nA media e: = %0.2f", mediaPonderada);

    return 0;
}
