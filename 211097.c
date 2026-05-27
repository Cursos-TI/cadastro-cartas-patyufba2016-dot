#include<stdio.h>

int main(){
int idade;
float renda;


// (Certifique-se de que a leitura da idade está aqui antes da renda)
printf("QUAL A SUA IDADE? \n");
scanf("%d",&idade);

printf("QUAL A SUA RENDA? \n");
scanf("%f",&renda);

// Verifica a idade primeiro
if(idade>=18 && idade< 65){
if ( renda<3000){
printf("Você atende a todos os critérios \n");}

else { printf ("Você naõ atende ao critério renda \n");}
}
else{ printf("Você não atende aos critérios \n");}
return 0;
}