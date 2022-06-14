#include <stdio.h>

	int main (){
		
		int num;
		
		printf("Informe um numero de 1 a 12 para saber o trimestre que pertence \n");
		scanf(" %d",&num);
		
		switch (num)
		{
			case 1:
			case 2:
			case 3:
			printf("Primeiro trimestre");
			break;
			
			case 4:
			case 5:
			case 6:
			printf("Segundo trimestre");
			break;
			
			case 7:
			case 8:
			case 9:
			printf("Terceiro trimestre");
			break;
			
			case 10:		
			case 11:
			case 12:
			printf("Quarto trimestre");
			break;
			
			default:
			printf("Numero incorreto, por favor informe um valor valido");
		}
		
		
		return 0;
	}
