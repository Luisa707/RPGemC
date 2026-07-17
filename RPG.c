#include <stdio.h>
#include <strings.h>

int main (void){
	
	int opcao;
	int classe;
	int vida;
	int mana;
	int defesa;
	int ouro;
	
	printf("  ===================  \n");
	printf("    YOUR MAJESTY  \n");
	printf("  ==================== \n");
        

		printf("1 - Novo jogo\n");
		printf("2 - Creditos\n");
		printf("3 - Sair\n");
		scanf("%d", &opcao);

	switch(opcao){
		 case 1:
		 		printf("\n==== classe ====\n");
                printf("1 - Guerreiro(a)\n");
                printf("2 - Arqueiro(a)\n");
                printf("3 - Mago(a)\n");
                printf("4 - Assasino(a)\n");
                 scanf("%d", &classe);
                 
                 
    printf("  ===================  \n");
	printf("    YOUR MAJESTY       \n");
	printf("  ==================== \n");
	
	printf("Um reino aterrorizado pela criminalidade...\n");
	printf("\n");
	printf("Clama por um heroi capaz de se infiltrar no submundo\n");
	printf("Para libertar seu povo da corrupcao de um rei sadico\n");
	printf("Cabe a vc passar pelos estadios de corrupcao das aldeias\n");
	printf("Para chegar até o rei, sera preciso derrotar seus quatro comandantes. O primeiro deles o Barao, senhor das terras do norte.\n");
	
	printf("%d",classe);
                 
    switch(classe){
		 case 1:
		 	printf("Voce escolheu o Guerreiro(a)\n");
		 		printf("\n");
		 	int vida = 120;
		 	int defesa = 10;
		 	int ataque = 15;
		 	int mana = 0;
		 	printf(" Vida:%d \n Ataque:%d \n Defesa:%d \n Mana:%d \n ", vida, ataque, defesa, mana);
		 	
            break;
            
         case 2:
         	printf("Voce escolheu o Arqueiro(a)\n");
         	vida = 90;
		 	defesa = 6;
		 	ataque = 18;
		 	mana = 0;
		 	printf(" Vida:%d \n Ataque:%d \n Defesa:%d \n Mana:%d \n ", vida, ataque, defesa, mana);
         	break;
        case 3:
        	printf("Voce escolheu o Mago(a)\n");
        	vida = 80;
		 	defesa = 6;
		 	ataque = 22;
		 	mana = 100;
		 	printf(" Vida:%d \n Ataque:%d \n Defesa:%d \n Mana:%d \n ", vida, ataque, defesa, mana);
        	break;
        case 4:
        	printf("Voce escolheu o Assasino(a)\n");
        	vida = 85;
		 	defesa = 5;
		 	ataque = 20;
		 	mana = 0;
		 	printf(" Vida:%d \n Ataque:%d \n Defesa:%d \n Mana:%d \n ", vida, ataque, defesa, mana);
        	break;
        	
        	default:
            printf("Opcao invalida.\n");
            
             }
		 		
			 
            break;
            
         case 2:
         	printf("2 - Creditos\n");
         	break;
        case 3:
        	printf("3 - Sair\n");
        	break;
        	
        	default:
            printf("Opcao invalida.\n");
            
             }
             	
	
	
	
		}
		
		
		
