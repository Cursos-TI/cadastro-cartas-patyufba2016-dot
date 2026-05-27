#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhadojogador,escolhadocomputador;
    srand (time (0));

    printf("****Jogo pedra,papel,tesoura***** \n"); 
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura \n");
    scanf("%d", &escolhadojogador);

    escolhadocomputador= rand()%3 +1;

    switch (escolhadojogador)
    {
    case 1:
        /* code */
        printf("Jogador: Pedra \n");
        break;
    case 2:
        /* code */
        printf("Jogador: Papel \n");
        break;
    case 3:
        /* code */
        printf("Jogador: Tesoura \n");
        break;
    default:
        break;
    }
    switch (escolhadocomputador)
    {
          case 1:
        /* code */
        printf("Computador: Pedra \n");
        break;
    case 2:
        /* code */
        printf("Computador: Papel \n");
        break;
    case 3:
        /* code */
        printf("Computador: Tesoura \n");
        break;
    
    }
    if(escolhadojogador == escolhadocomputador){
        printf("**Jogo empatou*** \n");
    } else if ( (escolhadojogador ==1)&& (escolhadocomputador==3)||
(escolhadojogador==2)&& (escolhadocomputador==1)|| (escolhadojogador==3)&&
 (escolhadocomputador==2))
 {printf("Você ganhou!!!! \n");}
 else { printf("****Você perdeu!!!*****  \n");}
    
       
        return 0;
}
