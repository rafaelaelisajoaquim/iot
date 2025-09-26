#include <math.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float media,total,nota1,nota2,nota3;

    printf("\nDigite a nota UM: ");
    scanf("%f%*c", & nota1);
    
    printf("\nDigite a nota DOIS: ");
    scanf("%f%*c", & nota2);
    
    printf("\nDigite a nota TRES: ");
    scanf("%f%*c", & nota3);
    
    total = nota1 + nota2 + nota3;
    media = total / 3;

    // Exibe o resultado
 	printf("\nA media e: = %0.2f", media);

    return 0;
}
