#include <stdio.h>

void moverTorre (int casas){ //mover cinco casas pra direita
    if (casas > 0 ){
        printf(" Direita, ");
        moverTorre(casas - 1);
    }
}

void moverBispo (int casas){ // mover cinco casa pra diagonal direta pra cima
    if (casas > 0 ){ // instanciei como 0 para poder setar o valor que ele deve andar quando chegar na função dele
        moverBispo(casas - 1);  //menos 1 pois eu instanciei o valor que ele deve andar, assim enquanto ele não chega a 0 ele anda o valor que foi cedido.   
                                // coloquei acima pra ele "positivar" os movimentos, pois supostamente ele esta indo pra frente    
        printf("Cima"); // mostrea a direção que ela vai ir
        printf(", Direita\n"); // mostra a casa que ele anda pra lateral              
    }
} 

void moverRainha (int casas){  //mover 8 casas pra esquerda
    if (casas > 0){    
        moverRainha (casas - 1); // está instanciado na funcção 8 casas, enquanto ele não chegar a 0 vai repetir 8 vezes o loop
        printf("Esquerda, "); // a direção que a rainha vai andar      
    }
}

int main(){

    int opcao;

    printf(" Vmos Jogar Xadrez \n");
    printf(" Selecione a peça que voce quer movimentar \n");
    printf(" Ou digite 5 para sair do Jogo \n");
    
    do
    {

        printf("\n");
        printf(" 1. Torre \n");
        printf(" 2. Bispo 1 Loop recursivo\n"); //loop recusivo
        printf(" 3. Rainha \n");
        printf(" 4. Cavalo \n"); //loop aninhado
        printf(" 5. Bispo 2 Loop Aninhado\n"); // loop aninhado
        printf(" 6. Sair \n");
        printf(" Digite a opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: // MOVIMENTO DA TORRE
            printf("\n");
            int movimentoTorre = 5;  // instanciei o numero de casas que pode andar 
            moverTorre(movimentoTorre); // vai ir para o codigo recusrivo e entrar em loop até que chegue no valor instaciado no recursivo
            break;

        case 2: // MOVIMENTO DO BISPO 1 LOOP RECURCIVO
            printf("\n");
            int movimentoBispo = 5; // instanciei o numero de casas que pode andar 
            moverBispo(movimentoBispo); // vai ir para o codigo recusrivo e entrar em loop até que chegue no valor instaciado no recursivo
            break;   

        case 3: //MOVIMENTO DA RAINHA
            printf("\n");    
            int movimentoRainha = 8; // instanciei o numero de casas que pode andar 
            moverRainha(movimentoRainha); // vai ir para o codigo recusrivo e entrar em loop até que chegue no valor instaciado no recursivo
            break;

        case 4: // MOVIMENTO DO CAVALO // aninhado com multiplas variaveis
        printf("\n");
            for (int casa = 0; casa < 3; casa++) {  // para ele executar 3 vezez
                if (casa < 2){       // enquanto for menor que 2 ele vai ir para cima 
                    printf("Cima, ");  
                 continue;  // para continuar o loop até que fique iual a 2
                }
                printf("Direita \n"); // quando ficar maior que dois ele sai do if e imprime o Direita e encerra o loop
                break;
            }
            
            break;

        case 5: // MOVIMENTO DO BISPO EM LOOP ANINHADO
            printf("\n");
            for( int casa = 0; casa < 5; casa++){  // enquanto ele não for menos que 5 ele executa
                    if(casa % 2 == 0){ // quando a casa for igual a 0 ou seja, for par ele dobra para ir a direita 
                       printf(", Direita");
                   }
                   printf(" Cima"); 
                }

            break;   

        case 6:  // opção de sair do jogo
            printf(" Você escolhei sair do Jogo \n");  // aqui o usuário digitou o numero 6
            break;

        default:
        printf(" Voce digitou uma opção invalida \n");  // caso o usuário digite um numero que não esteja entre as opções vai entrar novamente em loop
            break;
        }


        
    } while (opcao != 6);  // o jogo vai fechar se o usuário digitar o numero 6
  
    
   return 0;
}


