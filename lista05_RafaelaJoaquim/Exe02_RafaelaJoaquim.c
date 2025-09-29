#include <stdio.h>

int main() {
	float nota1, nota2, media;
	float somaMedias = 0;
	int i = 1;
	int aprovados=0, exame=0, reprovados=0;
	
	while(i <= 6) {
		printf("Digite as duas notas do %d aluno: \n", i);
		scanf("%f %f", &nota1, &nota2);
		
		media = (nota1+nota2) / 2;
		somaMedias += media;
		
		printf("Media do aluno %d = %.2f ", i, media);
		
		if (media < 3) {
			printf("Reprovado\n");
			reprovados++;
		} else if (media < 7) {
			printf("Exame\n");
			exame++;
		} else {
			printf("Aprovado\n");
			aprovados++;
		}
		i++;
	}
	printf("\nTotal de reprovados: %d\n", reprovados);
	printf("\nTotal de alunos em exame: %d\n", exame);
	printf("\nTotal de aprovados: %d\n", aprovados);
	printf("Media da classe: %.2f\n", somaMedias);
}