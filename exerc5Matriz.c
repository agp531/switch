#include <stdio.h>
	
	int main(){
		
		int i,j,matrizA[10][10];
		char menu;
			
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("Informe o valor da matriz[%d][%d]\n",i+1,j+1);
					scanf("%d",&matrizA[i][j]);
				}
			}
			
			printf("\t ===========================================================================================\n");
			printf("\t |                       Escolha o que deseja exibir a seguir:                             |\n");
			printf("\t |                                                                                         |\n");
			printf("\t | [A] Mostrar todos os elementos da matriz (na forma de uma matriz LxC).                  |\n");
			printf("\t | [B] Mostrar todos os elementos da quarta linha da matriz e da primeira coluna da matriz.|\n");	
			printf("\t | [C] Mostrar a soma dos elementos da diagonal principal.                                 |\n");
			printf("\t | [D] Atribuir o valor 0 para os valores negativos encontrados fora da diagonal principal.|\n");
			printf("\t | [E] Buscar um elemento na matriz.                                                       |\n");
			printf("\t |                                                                                         |\n");
			printf("\t ===========================================================================================\n");
			
			printf("\n Digite a opcao desejada: ");
			scanf(" %c",&menu);
			printf("\n");
			
			switch(menu){
			
				case 'A':
				case 'a':
				
					for(i=0;i<2;i++){
						for(j=0;j<2;j++){
							printf("%d \t",matrizA[i][j]);
						}
						printf("\n");
					}
					
					break;
					
				case 'B':
				case 'b':
					printf("funcionando aqui");
					break;
					
				case 'C':
				case 'c':
				
					break;
				
				case 'D':
				case 'd':
				
					break;
					
				case 'E':
				case 'e':
				
					break;
			}
				
		
		
		
		return 0;
	}



