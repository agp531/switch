#include <stdio.h>

	int main (){
		
		int num,ano;
		
		printf("Informe um numero de 1 a 12 para saber quantos dias tem o mes correspondente: \n");
		scanf(" %d",&num);
		
		switch(num)
		{
			case 1:
			printf("31 dias");
			break;
			
			case 2:
				printf("Informe o ano: ");
				scanf(" %d",&ano);
				
				if(ano%4==0 && (ano%400==0 || ano%100!=0)){
					printf("29 dias, ano bissexto");
				}else{
					printf("28 dias");
				}
					
			break;
			
			case 3:
			printf("31 dias");
			break;
			
			case 4:
			printf("30 dias");
			break;
			
			case 5:
			printf("31 dias");
			break;
			
			case 6:
			printf("30 dias");
			break;
			
			case 7:
			printf("31 dias");
			break;
			
			case 8:
			printf("31 dias");
			break;
			
			case 9:
			printf("30 dias");
			break;
			
			case 10:
			printf("31 dias");
			break;
			
			case 11:
			printf("30 dias");
			break;
			
			case 12:
			printf("31 dias");
			break;
			
			default:
			printf("Mes invalido");
		}
		
	
		return 0;
	}
