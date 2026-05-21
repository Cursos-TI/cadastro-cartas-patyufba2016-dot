#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Carta Um\n");
  // Área para definição das variáveis carta 1
    char estado;
    char codigo[4];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos;
    //variáveis 2
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;


  // Área para entrada de dados carta 1
    printf("Digite uma letra de A a H:\n");
    scanf("%c", &estado);
    printf("Digite a letra do estado seguida de um número de 01 a 04 :\n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade :\n");    scanf("%s", &cidade);
    printf("Digite o número de habitantes da cidade :\n");
    scanf("%d", &populacao);
    printf("Digite a area da cidade em quilômetros quadrados :\n");
    scanf("%f", &area);    printf("Digite o PIB da cidade :\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos na cidade :\n");
    scanf("%d", &pontos);

    //Area para entrada de dados carta 2
    printf("Digite uma letra de A a H:\n");
    scanf("%c", &estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 :\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade :\n"); 
    scanf("%s", &cidade1);
    printf("Digite o número de habitantes da cidade :\n");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade em quilômetros quadrados :\n");
    scanf("%f", &area1);    
    printf("Digite o PIB da cidade :\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos na cidade :\n");
    scanf("%d", &pontos1);    

  // Área para exibição dos dados da cidade
    printf("CARTA 1:\n");
    printf("ESTADO: %c\n",estado);
    printf("CÓDIGO: %s\n",codigo);
    printf("NOME DA CIDADE: %s\n",cidade);
    printf("POPULAÇÃO: %d\n",populacao);
    printf("ÁREA: %f\n",area);
    printf("PIB: %f\n",pib);
    printf("Nº PONTOS TURÍSTICOS: %d\n",pontos);
    
    printf("CARTA 2:\n");
    printf("ESTADO: %c\n",estado1);
    printf("CÓDIGO: %s\n",codigo1);
    printf("NOME DA CIDADE: %s\n",cidade1);
    printf("POPULAÇÃO: %d\n",populacao1);
    printf("ÁREA: %f\n",area1);
    printf("PIB: %f\n",pib1);
    printf("Nº PONTOS TURÍSTICOS: %d\n",pontos1);

    return 0;
} 
