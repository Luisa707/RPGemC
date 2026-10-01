#include <stdio.h>
#include <strings.h>

int main (void){
	
	int opcao;
	int classe;
	int vida;
	int ataque;
	int defesa;
	int vidaGuarda = 40;
	int acoes;
	int magia;
	int mana;
	char iniciativa;
	

	                
	 
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
	printf("Para chegar ate o rei, sera preciso derrotar seus quatro comandantes. O primeiro deles o Barao, senhor das terras do norte.\n");
	
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
		 	
	printf("  ===================  \n");
	printf("    YOUR MAJESTY       \n");
	printf("  ==================== \n");
	
	printf("A vila parece monotoma, sem vida. Ao olhar os aldeos olhos fundos\n");
	printf("mentes vazias como zumbies, quando se escuta passos pesados...\n");
	printf("Passso como metal tocando, arrastando pelo chao de areia\n");
	printf("Os aldeos escutam os passos e tremem se escondem\n");
	
	do{
	
	
	printf("  ===================  \n");
	printf(" | Guarda Corrompido | \n");
	printf("  ===================  \n");
	printf(" |Vida: %d           | \n",vidaGuarda);
	printf(" ====================  \n");
	
	printf("Guarda Corrompido: Outro aldeao para atromentar, vou fazer de voce meu escravo.\n");
	printf("Ele ergue a arma e sua direcao\n");
	printf("  ========================  \n");
	printf(" | Qual sera sua decisao: | \n");
	printf("  ========================  \n");
	printf(" |1-atacar                | \n");
	printf(" |2-defender              | \n");
	printf(" |3-Fugir                 | \n");
	printf(" =========================  \n");
	scanf("%d", &acoes);
	
	
	if(acoes == 1){
		printf("Voce usa a espada na qual trouxe de seu antigo vilarejo, ela não e muito forte mas ressistente o suificiente\n");
		printf("Dano causado: 15\n");
		vidaGuarda = vidaGuarda - ataque;
		printf("Vida do cavaleiro: %d\n", vidaGuarda);
	}
	
	if(acoes == 2){
		printf("Voce para na frente do homem e espera um ataque vindo dele, suas roupas sao ressitenstes.\n");
		printf("Por causa do antigo vilarejo que venho utiliza armadura de malha como gratidao dos moradores.");
		printf("O guarda ri e avanca, atacando, sua arma maior larga esculpida em metal.\n");
		printf("Dano causado: 30\n");
		int danoC = 30;
		vida = vida - danoC;
		printf("Vida do jogador: %d\n", vida);
	}
	
	if(acoes == 3){
	printf("Voce corre para longe do guarda, se escondendo dentro de uma das casas,\n o guarda permance de procurando. "); 
	printf("Decidir surprrender lo:(S/N)\n"); 
	scanf(" %c",&iniciativa);
	if(iniciativa == 'S' || iniciativa == 's') {

    printf("Voce decide surpreender o guarda...\n");
    printf("Voce espera o momento certo e ataca pelas costas!\n");
    printf("O guarda nao esperava pelo ataque.\n");

    } 
	else if(iniciativa == 'N' || iniciativa == 'n') {

    printf("Voce decide nao arriscar.\n");
    printf("Deseja seguir sua jornada? (S/N)\n");
    scanf(" %c", &iniciativa);

    if(iniciativa == 'S' || iniciativa == 's') {
        printf("Voce deixa a vila para tras e continua sua jornada.\n");
    } 
    else if(iniciativa == 'N' || iniciativa == 'n') {
        printf("Voce decide permanecer escondido.\n");
        printf("Fim.\n");
    }
   }
}

	}while(vida > 0 && vidaGuarda > 0 && acoes != 3);
	break;
	
   
         case 2:
         	printf("Voce escolheu o Arqueiro(a)\n");
         	vida = 90;
		 	defesa = 6;
		 	ataque = 18;
		 	mana = 0;
		 	printf(" Vida:%d \n Ataque:%d \n Defesa:%d \n Mana:%d \n ", vida, ataque, defesa, mana);
         	break;
        
		case 3: printf("Voce escolheu o Mago(a)\n"); 
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
            break;
            
             }
             break;
		 		
            
         case 2:
         	printf("2 - Creditos\n");
         	break;
        case 3:
        	printf("3 - Sair\n");
        	break;
        	
            default:
            	printf("Opcao invalida");
            	break;
             }
         }
     
 
         
             	
	

		
		
		
