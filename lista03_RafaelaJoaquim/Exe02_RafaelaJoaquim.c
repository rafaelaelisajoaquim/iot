#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int dia, mes, diasnomes ;
		printf("Digite o dia do seu aniversario:\n");
			scanf("%d", &dia);
			
		printf("Digite o mes do seu aniversario:\n");
			scanf("%d", &mes);
			
		switch(mes){
			case 1: case 3 :case 5: case 7: case 8: case 10: case 12:
				diasnomes=31; 
			break;
			case 4: case 6 :case 9: case 11:
				diasnomes=29;
			break;
			case 2:
				diasnomes=29;
			break;
				printf("Mes invalido.\n");
		}
		
		if(dia<1 || dia>diasnomes) {
		printf("Dia invalido.\n");
		return 0;
		}
		
		switch(mes) {
			case 1:
				if(dia>=20)
					printf("Seu signo eh Aquario\n");
				else
					printf("Seu signo eh Capricornio\n");
			break;
			
			case 2: 
				if(dia>=19) 
					printf("Seu signo eh Peixes\n");
				else
					printf("Seu signo eh Aquario\n");
			break;
			
			case 3:
				if(dia>=21) 
					printf("Seu signo eh Aries\n");
				else
					printf("Seu signo eh Peixes\n");
			break;
			
			case 4:
				if(dia>=20) 
					printf("Seu signo eh Touro\n");
				else
					printf("Seu signo eh Aries\n");
			break;
			
			case 5: 
				if(dia>=21) 
					printf("Seu signo eh Gemeos\n");
				else
					printf("Seu signo eh Touro\n");
			break;
			
			case 6: 
				if(dia>=22) 
					printf("Seu signo eh Cancer\n");
				else
					printf("Seu signo eh Gemeos\n");
			break;
			
			case 7: 
				if(dia>=23) 
					printf("Seu signo eh Leao\n");
				else
					printf("Seu signo eh Cancer\n");
			break;
			
			case 8: 
				if(dia>=23) 
					printf("Seu signo eh Virgem\n");
				else
					printf("Seu signo eh Leao\n");
			break;
			
			case 9: 
				if(dia>=23) 
					printf("Seu signo eh Libra\n");
				else
					printf("Seu signo eh Virgem\n");
			break;
			
			case 10: 
				if(dia>=23) 
					printf("Seu signo eh Escorpiao\n");
				else
					printf("Seu signo eh Libra\n");
			break;
			
			case 11:
				if(dia>=22) 
					printf("Seu signo eh Sagitario\n");
				else
					printf("Seu signo eh Escorpiao\n");
			break;
			
			case 12: 
				if(dia>=22) 
					printf("Seu signo eh Capricornio\n");
				else
					printf("Seu signo eh Sagitario\n");
			break;
		} 
	}