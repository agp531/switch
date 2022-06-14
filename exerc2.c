#include <stdio.h>

	int main (){
		
		char num;
			
			printf("Informe um numero de 1 a 7 para saber o dia da semana \n");
			scanf(" %c",&num);
			
			switch (num)
			{
				case '1':
				printf("Domingo");
				break;
				
				case '2':
				printf("Segunda-feira");
				break;
				
				case '3':
				printf("Terca-feira");
				break;
				
				case '4':
				printf("Quarta-feira");
				break;
				
				case '5':
				printf("Quinta-feira");
				break;
				
				case '6':
				printf("Sexta-feira");
				break;
				
				case '7':
				printf("Sabado");
				break;
				
				default:
				printf("Erro, numero invalido");
				}
		
		
		return 0;
	}
