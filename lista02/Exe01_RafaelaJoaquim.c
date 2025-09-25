#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int dia, mes ;
		printf("Digite o dia do seu aniversario:\n");
			scanf("%d", &dia);
			
		printf("Digite o mes do seu aniversario:\n");
			scanf("%d", &mes);
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
		
			default:
			printf("Invalido!");
		}
	}