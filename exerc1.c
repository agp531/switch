#include <stdio.h>

	int main (){
		
		char ctg;
			
			printf("informe a categoria da sua carteira de habilitacao \n");
			scanf(" %c",&ctg);
			
			switch (ctg)
			{
				case 'A':
				case 'a':
				printf("Voce pode dirigir: MOTO");
				break;
				
				case 'B':
				case 'b':
				printf("Voce pode dirigir: CARRO");
				break;
				
				case 'C':
				case 'c':
				printf("Voce pode dirigir: CAMINHAO");
				break;
				
				case 'D':
				case 'd':
				printf("Voce pode dirigir: ONIBUS");
				break;
				
				case 'E':
				case 'e':
				printf("Voce pode dirigir: CARRETA");
				break;
				
				default:
				printf("Categoria invalida");
			}
			
						
			return 0;
		}
