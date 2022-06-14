#include <stdio.h>
#include <math.h>

	int main (){
		
		int compra,menu,desc,parc;
	
			
			printf("Informe o valor total da compra R$: ");
			scanf(" %d",&compra);
			printf(" =====================================================================\n");
			printf(" |                Escolha a forma de pagamento:                      |\n");
			printf(" | [1] Pagamento a vista - 15%% de desconto                           |\n");
			printf(" | [2] Pagamento com cheque pre-datado para 30 dias - 10%% de desconto|\n");	
			printf(" | [3] Pagamento parcelado em 3 vezes - 5%% de desconto.              |\n");
			printf(" | [4] Pagamento parcelado em 6 vezes -sem desconto.                 |\n");
			printf(" | [5] Pagamento parcelado em 12 vezes - 8%% de juros.                |\n");
			printf(" =====================================================================\n");
			
			printf("  Digite a opcao desejada: ");
			scanf("  %d",&menu);
			printf("\n");
			
			switch(menu){
				
				case 1:
					desc = compra *85/100;
					printf(" Valor total R$:%d \n",compra);
					printf(" Valor avista com 15%% de desconto R$:%d ,00",desc);
					break;
				case 2:
					desc = compra *90/100;
					printf(" Valor total R$:%d \n",compra);
					printf(" Valor final com 10%% de desconto R$:%d",desc);
					break;	
				case 3:
					desc = compra *95/100;
					parc = desc / 3;
					printf(" Valor total R$:%d,00 \n",compra);
					printf(" Valor final com 5%% de desconto R$:%d,00 \n",desc);
					printf(" Valor das parcelas 3x R$:%d,00",parc);
					break;
					
				case 4:
					parc = compra / 6 ;
					printf(" Valor total R$:%d,00 \n",compra);
					printf(" Opcao selecionada nao tem desconto \n");
					printf(" Valor das parcelas 6x R$:%d,00",parc);
					break;
					
				case 5:
					desc = compra * 108/100;
					parc = desc / 12;
					printf(" Valor total R$:%d,00 \n",compra);
					printf(" Valor final com juros de 8%% R$:%d \n",desc);
					printf(" Valor das parcelas 12x R$:%d,00",parc);
				
							
				default:
				printf(" Opcao selecionada invalida.");
				
			}	
			
		
		
		
		return 0; 
	}
