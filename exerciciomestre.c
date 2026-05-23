
#include <stdio.h>
int main () {
// 1.declarar variaveis

char produtoA[30]= "Produto A";
char produtoB[30]= "Produto B";

// quantidade estoque
unsigned int EstoqueA = 1000;
unsigned int EstoqueB = 2000;

// valores em estoque
float valorA = 10.50;
float valorB = 20.40;

//estoque minimo
unsigned int EstoqueMinimoA = 500;
unsigned int EstoqueMinimoB = 2500;

//valor total em estoque
double ValorTotalA;
double ValorTotalB;

int resultadoA, resultadoB;

//Exibir informaões dos produtos

printf("O %s tem estoque %u e valor unitário %.2f\n",produtoA,EstoqueA,valorA);
printf("O %s tem estoque %u e valor unitário %.2f\n",produtoB,EstoqueB,valorB);


// Comparações com valor mínimo de estoque
resultadoA = EstoqueA > EstoqueMinimoA;
resultadoB = EstoqueB > EstoqueMinimoB;

 printf ("O %s tem estoque mínimo %d \n",produtoA,resultadoA);
 printf ("O %s tem estoque mínimo %d \n",produtoB,resultadoB);

 
// Comparações dos valores totais dos produtos
printf("O valor total do Produto A (R$ %.2f) é maior que o valor total do Produto B (R$ %.2f): %d\n", EstoqueA * valorA, EstoqueB * valorB, (EstoqueA * valorA)>(EstoqueB * valorB)); 


return 0;

}