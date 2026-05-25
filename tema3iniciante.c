#include <stdio.h>

int main() {

// Área para definição das variáveis carta 1
char estado [30];
char codigo[5];
char cidade[50];
int populacao;
float area;
float pib;
int pontostur;
int densidadepopulacional;
int pibpercapta;

// Área para definição das variáveis carta 2
char estado1[30];
char codigo1[5];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontostur1;
int densidadepopulacional1;
int pibpercapta1;

// Área para entrada de dados carta 1
printf("--- CADASTRO DA CARTA 1 ---\n");
    
printf("Digite o estado :\n");  
scanf("%s", estado);

printf("Digite o código formado pela letra inicial do estado e um número de 01 a o4 :\n");  
scanf("%s", codigo);

printf("Digite o nome da cidade :\n");  
scanf("%s", cidade);

printf("Digite o número de habitantes da cidade :\n");
scanf("%d", &populacao);

printf("Digite a area da cidade em quilômetros quadrados :\n");
scanf("%f", &area); 

printf("Digite o PIB da cidade :\n");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turísticos na cidade :\n");
scanf("%d", &pontostur);

densidadepopulacional = populacao / area;
pibpercapta = pib /populacao;

// Área para entrada de dados carta 2
printf("--- CADASTRO DA CARTA 2 ---\n");
    
printf("Digite o estado1 :\n");  
scanf("%s", estado1);

printf("Digite o código formado pela letra inicial do estado e um número de 01 a o4 :\n");  
scanf("%s", codigo1);

printf("Digite o nome da cidade :\n");  
scanf("%s", cidade1);

printf("Digite o número de habitantes da cidade :\n");
scanf("%d", &populacao1);

printf("Digite a area da cidade em quilômetros quadrados :\n");
scanf("%f", &area1); 

printf("Digite o PIB da cidade :\n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turísticos na cidade :\n");
scanf("%d", &pontostur1);

densidadepopulacional1 = populacao1 / area1;
pibpercapta1 = pib1 /populacao1;

//comparação de atributos
if (populacao > populacao1) {
printf ("Resultado:Carta1 venceu! \n");
}else{ printf ("Resultado: Carta 2 venceu! \n'");
}

return 0;
}